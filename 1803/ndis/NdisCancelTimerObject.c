/*
 * XREFs of NdisCancelTimerObject @ 0x1C00142B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 */

BOOLEAN __stdcall NdisCancelTimerObject(NDIS_HANDLE TimerObject)
{
  __int64 v2; // rax
  BOOLEAN v3; // di
  __int64 v4; // rax
  KIRQL v6; // r8
  _QWORD **v7; // rdx
  _QWORD *v8; // rcx

  if ( (unsigned __int8)byte_1C0099613 >= 4u )
    WPP_SF_qq(12LL, &WPP_f50270d3ac6439ecad1a10c8aacbf967_Traceguids, *((_QWORD *)TimerObject + 3), TimerObject);
  v2 = *((_QWORD *)TimerObject + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 3704) & 8) != 0 )
      return 0;
    v3 = KeCancelTimer((PKTIMER)((char *)TimerObject + 32));
    v4 = *((_QWORD *)TimerObject + 24);
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 3784) + 26LL) & 2) != 0 && v3 )
    {
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 1880));
      v7 = (_QWORD **)(*((_QWORD *)TimerObject + 24) + 560LL);
      v8 = *v7;
      if ( *v7 )
      {
        while ( v8 != TimerObject )
        {
          v7 = (_QWORD **)v8;
          v8 = (_QWORD *)*v8;
          if ( !v8 )
            goto LABEL_16;
        }
        *v7 = *(_QWORD **)TimerObject;
      }
LABEL_16:
      KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)TimerObject + 24) + 1880LL), v6);
    }
  }
  else
  {
    v3 = KeCancelTimer((PKTIMER)((char *)TimerObject + 32));
  }
  if ( *((_BYTE *)TimerObject + 200) )
    KeFlushQueuedDpcs();
  return v3;
}
