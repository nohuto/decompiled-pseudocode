/*
 * XREFs of xxxInternalEnumWindow @ 0x1C001BFCC
 * Callers:
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C000656C (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     xxxDeactivate @ 0x1C00B304C (xxxDeactivate.c)
 *     xxxTurnOffCompositing @ 0x1C01C273C (xxxTurnOffCompositing.c)
 *     xxxSetClassIcon @ 0x1C020AD74 (xxxSetClassIcon.c)
 *     xxxHelpLoop @ 0x1C0218D34 (xxxHelpLoop.c)
 * Callees:
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxInternalEnumWindow(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3,
        unsigned int a4)
{
  __int64 result; // rax
  __int64 v7; // rbp
  _QWORD *v8; // rdi
  unsigned int v9; // r14d
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-48h]
  _QWORD v21[3]; // [rsp+28h] [rbp-40h] BYREF

  result = BuildHwndList(a1, a4, 0LL);
  v20 = result;
  v7 = result;
  if ( result )
  {
    v8 = (_QWORD *)(result + 32);
    v9 = 1;
    v10 = *(_QWORD *)(result + 32);
    if ( v10 != 1 )
    {
      do
      {
        PsGetThreadWin32Thread(KeGetCurrentThread());
        v13 = (unsigned __int16)v10;
        if ( (unsigned __int64)(unsigned __int16)v10 < *(_QWORD *)(gpsi + 8LL) )
        {
          v14 = v10 >> 16;
          v15 = gSharedInfo[1] + (unsigned int)(v13 * LODWORD(gSharedInfo[2]));
          v16 = (__int64 *)(gpKernelHandleTable + 16 * ((__int64)(unsigned int)(v13 * LODWORD(gSharedInfo[2])) >> 5));
          if ( ((_WORD)v14 == *(_WORD *)(v15 + 26)
             || (_WORD)v14 == 0xFFFF
             || !(_WORD)v14 && PsGetCurrentProcessWow64Process(gpsi, v11, v13, v12))
            && (*(_BYTE *)(v15 + 25) & 1) == 0
            && *(_BYTE *)(v15 + 24) == 1 )
          {
            v17 = *v16;
            if ( *v16 )
            {
              v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v21;
              v21[1] = v17;
              ++*(_DWORD *)(v17 + 8);
              v9 = a2(v17, a3);
              ThreadUnlock1(v19, v18);
              if ( !v9 )
                break;
            }
          }
        }
        v10 = *++v8;
      }
      while ( *v8 != 1LL );
      v7 = v20;
    }
    FreeHwndList(v7);
    return v9;
  }
  return result;
}
