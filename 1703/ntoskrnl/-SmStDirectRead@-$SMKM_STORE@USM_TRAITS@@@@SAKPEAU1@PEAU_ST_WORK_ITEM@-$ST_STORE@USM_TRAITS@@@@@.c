/*
 * XREFs of ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14011F8F0
 * Callers:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140053C54 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14010F480 (KeExpandKernelStackAndCalloutInternal.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14011FA24 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14011FD0C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectRead(__int64 a1, __int128 *a2)
{
  unsigned int v2; // ebx
  __int64 Context; // rax
  __int64 v6; // rsi
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v10; // xmm1
  __int64 v11; // [rsp+30h] [rbp-98h]
  _QWORD v12[3]; // [rsp+40h] [rbp-88h] BYREF
  int v13; // [rsp+58h] [rbp-70h]
  __int128 v14; // [rsp+60h] [rbp-68h]
  $5BC46E0569261879018906DEC3127961 v15; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  if ( KeGetCurrentThread()->ApcStateIndex != 1 || KeGetCurrentThread()->ApcState.Process == *(_KPROCESS **)(a1 + 6536) )
  {
    KiStackAttachProcess(*(_KPROCESS **)(a1 + 6536), 0, (__int64)&v15);
    v2 = 2;
    Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(a1);
    v6 = Context;
    if ( Context )
    {
      v7 = *a2;
      v8 = a2[1];
      v12[0] = a1;
      v12[1] = a2;
      v12[2] = Context;
      v2 = 3;
      v14 = v8;
      if ( (int)KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(__int64))SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout,
                  (__int64)v12,
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
    ST_STORE<SM_TRAITS>::StReleaseReadContext(a1, v6);
  if ( (v2 & 2) != 0 )
    KiUnstackDetachProcess(&v15, 0LL);
  return v2 >> 2;
}
