/*
 * XREFs of ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C002FC04
 * Callers:
 *     ?SubmitPagingToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002F5A0 (-SubmitPagingToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002F760 (-SubmitRenderToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiCalibrateHwClock(struct _VIDSCH_NODE *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-30h]
  unsigned __int64 v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]

  if ( (*((_DWORD *)a1 + 3) & 2) != 0 && !*((_QWORD *)a1 + 775) )
  {
    v2 = *((_QWORD *)a1 + 3);
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v3 = *((unsigned __int16 *)a1 + 2);
    v9 = 1;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64 *))DxgCoreInterface[59])(
      *(_QWORD *)(v2 + 8),
      *(unsigned __int16 *)(*(_QWORD *)(v2 + 8 * v3 + 440) + 8LL),
      *(unsigned __int16 *)(*(_QWORD *)(v2 + 8 * v3 + 440) + 6LL),
      &v6);
    v4 = *((_QWORD *)a1 + 774);
    if ( v4 )
    {
      if ( v4 + 1000 <= v8 )
      {
        v5 = v7;
        if ( *((_QWORD *)a1 + 776) + 1000LL <= v7 )
        {
          *((_QWORD *)a1 + 775) = v8;
          *((_QWORD *)a1 + 777) = v5;
        }
      }
    }
    else
    {
      *((_QWORD *)a1 + 774) = v8;
      *((_QWORD *)a1 + 776) = v7;
    }
  }
}
