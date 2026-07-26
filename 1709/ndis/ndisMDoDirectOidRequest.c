/*
 * XREFs of ndisMDoDirectOidRequest @ 0x1C0044710
 * Callers:
 *     ndisDoDirectOidRequest @ 0x1C0043980 (ndisDoDirectOidRequest.c)
 *     ndisReplayDirectOids @ 0x1C0070738 (ndisReplayDirectOids.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C005FC6C (ndisMInvokeDirectOidRequest.c)
 *     ndisClearBusy @ 0x1C006FEDC (ndisClearBusy.c)
 *     ndisSetBusyAsync @ 0x1C0071374 (ndisSetBusyAsync.c)
 */

__int64 __fastcall ndisMDoDirectOidRequest(__int64 a1, _DWORD *a2, char a3)
{
  struct _KEVENT *v4; // r12
  unsigned int v7; // edi
  KIRQL v8; // r15
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  KIRQL v13; // al
  struct _KTHREAD *CurrentThread; // rcx
  bool v15; // zf
  KIRQL v16; // dl
  __int64 v18; // [rsp+20h] [rbp-28h]

  v4 = 0LL;
  v7 = -1073741823;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x1Fu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2);
  if ( !a3 && *(_QWORD *)(a1 + 4480) && !(unsigned __int8)ndisSetBusyAsync(a1, 1, 50, (_DWORD)a2, 0) )
  {
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
      WPP_SF_q(0x20u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, (__int64)a2);
    v7 = 259;
    goto LABEL_41;
  }
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v9 = *(_DWORD *)(a1 + 4280);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2296001;
  if ( v9 < 0x4E20 )
  {
    v10 = *(_DWORD *)(a1 + 124);
    if ( (v10 & 0x20000) != 0 )
    {
      v7 = -1073676276;
    }
    else if ( (*(_DWORD *)(a1 + 120) & 0x80000) != 0 )
    {
      v7 = -1073676275;
    }
    else
    {
      v11 = a2[1];
      if ( v11 != 2 || (v10 & 0x800) == 0 && *(int *)(a1 + 3892) <= 1 )
      {
        v12 = v10 & 0x20100;
        if ( v12 || *(int *)(a1 + 3892) > 1 )
        {
          if ( (v11 & 0xFFFFFFFD) != 0 )
          {
            if ( v11 == 1 )
            {
              a2[13] = a2[12];
              v7 = v12 == 0 ? 0xC023002F : 0;
            }
            else if ( v11 == 12 )
            {
              a2[16] = 0;
            }
          }
          else
          {
            a2[13] = 0;
          }
          v16 = v8;
        }
        else
        {
          *(_DWORD *)(a1 + 4280) = v9 + 1;
          a2[22] |= 0x10000u;
          *(_QWORD *)(a1 + 520) = 0LL;
          *(_DWORD *)(a1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v8);
          v7 = ndisMInvokeDirectOidRequest(a1, a2);
          if ( v7 == 259 )
            goto LABEL_41;
          v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
          CurrentThread = KeGetCurrentThread();
          v15 = (*(_DWORD *)(a1 + 4280))-- == 1;
          *(_QWORD *)(a1 + 520) = CurrentThread;
          *(_DWORD *)(a1 + 1856) = 2296115;
          if ( v15 && *(_QWORD *)(a1 + 4288) )
          {
            v4 = *(struct _KEVENT **)(a1 + 4288);
            *(_QWORD *)(a1 + 4288) = 0LL;
          }
          v16 = v13;
        }
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v16);
        if ( v7 == 259 )
          goto LABEL_39;
        goto LABEL_37;
      }
      v7 = -2147483633;
    }
  }
  else
  {
    if ( (unsigned __int8)byte_1C0098752 >= 2u )
    {
      LODWORD(v18) = 20000;
      WPP_SF_qqDD(0x21u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, v18, v9);
    }
    v7 = -1073741670;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v8);
LABEL_37:
  if ( *(_QWORD *)(a1 + 4480) )
    ndisClearBusy(a1, 1LL, 50LL);
LABEL_39:
  if ( v4 )
    KeSetEvent(v4, 0, 0);
LABEL_41:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(34LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, v7);
  return v7;
}
