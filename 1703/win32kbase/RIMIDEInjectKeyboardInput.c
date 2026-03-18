/*
 * XREFs of RIMIDEInjectKeyboardInput @ 0x1C010ADCC
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C010ABE8 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardInput(char *a1, const void *a2, unsigned int a3)
{
  __int64 v3; // rbx
  int v5; // r14d
  char *v6; // r13
  __int64 v7; // r15
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  v5 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = (char *)Object;
    v7 = *((_QWORD *)Object + 51);
    RIMLockExclusive(v7 + 96);
    if ( *(_BYTE *)(v7 + 73) )
    {
      v5 = -1073741637;
    }
    else
    {
      RIMLockExclusive(v7 + 696);
      *((_DWORD *)v6 + 80) = 0;
      *((_QWORD *)v6 + 41) = 12 * v3;
      memset(v6 + 556, 0, 0x78uLL);
      memmove(v6 + 556, a2, *((_QWORD *)v6 + 41));
      rimProcessDeviceBufferAndStartRead(v7, (__int64)(v6 + 64));
      *(_QWORD *)(v7 + 704) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 696, 0LL);
      KeLeaveCriticalRegion();
    }
    *(_QWORD *)(v7 + 104) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v5;
}
