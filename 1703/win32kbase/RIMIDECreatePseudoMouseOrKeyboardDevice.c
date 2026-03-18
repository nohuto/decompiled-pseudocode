/*
 * XREFs of RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C010A148
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00E2680 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00E2940 (NtUserInjectMouseInput.c)
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C0091820 (RawInputManagerObjectCreateKernelHandle.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     rimFindReferencedRimObj @ 0x1C00FF52C (rimFindReferencedRimObj.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0100090 (RIMAddInjectionDeviceOfType.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C01093AC (RIMIDECreateDeviceInstancePath.c)
 */

__int64 __fastcall RIMIDECreatePseudoMouseOrKeyboardDevice(unsigned int a1, __int64 *a2)
{
  int ReferencedRimObj; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v8[3]; // [rsp+38h] [rbp-61h] BYREF
  _OWORD v9[10]; // [rsp+50h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+110h] [rbp+77h] BYREF
  PVOID Object; // [rsp+118h] [rbp+7Fh] BYREF

  v8[0] = 0LL;
  v8[1] = 0LL;
  Handle = (HANDLE)-1LL;
  v7 = -1LL;
  memset(v9, 0, 0x90uLL);
  Object = 0LL;
  ReferencedRimObj = RIMIDECreateDeviceInstancePath(a1, 0, 0, (__int64)v8);
  if ( ReferencedRimObj >= 0 )
  {
    ReferencedRimObj = rimFindReferencedRimObj((unsigned int)(a1 != 0) + 1, 0, 0, (struct _LIST_ENTRY **)&Object);
    if ( ReferencedRimObj >= 0 )
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
      if ( ReferencedRimObj >= 0 )
      {
        *(_QWORD *)&v9[0] = 0LL;
        *((_QWORD *)&v9[0] + 1) &= 0xFFFFFFFC00000000uLL;
        *(_QWORD *)&v9[5] = 0LL;
        DWORD2(v9[5]) = 0;
        *(_QWORD *)((char *)&v9[7] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v5) + 824);
        HIDWORD(v9[7]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v9[7] + 4)) + 12) & 0x80000000;
        ReferencedRimObj = RIMAddInjectionDeviceOfType(
                             (char *)Handle,
                             (CTouchProcessor *)v8,
                             a1,
                             v9,
                             0,
                             (CTouchProcessor *)&v7);
        if ( ReferencedRimObj >= 0 )
          *a2 = v7;
        ZwClose(Handle);
      }
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)ReferencedRimObj;
}
