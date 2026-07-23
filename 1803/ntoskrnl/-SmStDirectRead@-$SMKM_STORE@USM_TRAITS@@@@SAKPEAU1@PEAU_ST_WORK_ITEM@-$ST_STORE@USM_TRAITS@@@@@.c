/*
 * XREFs of ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1401538A0
 * Callers:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140090488 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140096484 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140099560 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14012F870 (KeExpandKernelStackAndCalloutInternal.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectRead(__int64 a1, __int128 *a2)
{
  unsigned int v2; // ebx
  PSLIST_ENTRY Context; // rax
  __int64 v6; // rsi
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v10; // xmm1
  __int64 v11; // [rsp+30h] [rbp-98h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-88h] BYREF
  int v13; // [rsp+58h] [rbp-70h]
  __int128 v14; // [rsp+60h] [rbp-68h]
  _BYTE v15[48]; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  if ( KeGetCurrentThread()->ApcStateIndex != 1 || KeGetCurrentThread()->ApcState.Process == *(_KPROCESS **)(a1 + 6568) )
  {
    KiStackAttachProcess(*(_KPROCESS **)(a1 + 6568), 0, (__int64)v15);
    v2 = 2;
    Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(a1);
    v6 = (__int64)Context;
    if ( Context )
    {
      v7 = *a2;
      v8 = a2[1];
      BugCheckParameter3[0] = a1;
      BugCheckParameter3[1] = (ULONG_PTR)a2;
      BugCheckParameter3[2] = (ULONG_PTR)Context;
      v2 = 3;
      v14 = v8;
      if ( (int)KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(ULONG_PTR))SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout,
                  (ULONG_PTR)BugCheckParameter3,
                  0x2000,
                  0,
                  0LL) >= 0 )
      {
        v2 = 2;
        if ( v13 )
        {
          v2 = 6;
        }
        else
        {
          v10 = v14;
          *a2 = v7;
          a2[1] = v10;
        }
      }
    }
  }
  else
  {
    v6 = v11;
  }
  if ( (v2 & 1) != 0 )
    ST_STORE<SM_TRAITS>::StReleaseReadContext((_SLIST_HEADER *)a1, v6);
  if ( (v2 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v15, 0LL);
  return v2 >> 2;
}
