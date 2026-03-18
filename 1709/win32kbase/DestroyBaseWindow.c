/*
 * XREFs of DestroyBaseWindow @ 0x1C00EBC40
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     HMDestroyObject @ 0x1C00727A0 (HMDestroyObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0127D70 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     HandleBaseWindowDestruction @ 0x1C012E150 (HandleBaseWindowDestruction.c)
 */

__int64 __fastcall DestroyBaseWindow(_QWORD *BaseAddress)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  char *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rax

  EditionClearInputTransforms();
  v2 = BaseAddress[10];
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 + 4);
    v4 = v2 + 8;
    if ( *(_DWORD *)(v2 + 4) )
    {
      do
      {
        if ( (*(_WORD *)(v4 + 10) & 0x8001) == 0x8001 )
          (***(void (__fastcall ****)(_QWORD))v4)(*(_QWORD *)v4);
        v4 += 16LL;
        --v3;
      }
      while ( v3 );
    }
    Win32FreePool(BaseAddress[10]);
    BaseAddress[10] = 0LL;
  }
  v5 = (char *)(BaseAddress + 12);
  while ( *(char **)v5 != v5 )
  {
    v6 = *(_QWORD **)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *(_QWORD *)v5 = v7;
    *(_QWORD *)(v7 + 8) = v5;
    CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v6[2], 7LL, v6);
    Win32FreePool((__int64)v6);
  }
  HandleBaseWindowDestruction(BaseAddress);
  return HMDestroyObject(BaseAddress);
}
