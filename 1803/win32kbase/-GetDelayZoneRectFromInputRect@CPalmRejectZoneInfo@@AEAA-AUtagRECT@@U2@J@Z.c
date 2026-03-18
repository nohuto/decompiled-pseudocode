/*
 * XREFs of ?GetDelayZoneRectFromInputRect@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@U2@J@Z @ 0x1C012C634
 * Callers:
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C012C6E4 (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CPalmRejectZoneInfo::GetDelayZoneRectFromInputRect(
        CPalmRejectZoneInfo *this,
        struct tagRECT *__return_ptr retstr,
        __m128i *a3,
        int a4)
{
  int UserHandedness; // eax
  unsigned __int64 v8; // xmm0_8
  struct tagRECT *result; // rax
  struct tagRECT v10; // [rsp+20h] [rbp-18h]

  *(_QWORD *)&retstr->left = 0LL;
  *(_QWORD *)&retstr->right = 0LL;
  UserHandedness = GetUserHandedness(this);
  v8 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  if ( UserHandedness )
  {
    *(_QWORD *)&v10.left = a3->m128i_i64[0];
    v10.right = v8 + a4;
  }
  else
  {
    v10.left = a3->m128i_i64[0] - a4;
    v10.right = v8;
    v10.top = HIDWORD(a3->m128i_i64[0]) - a4;
  }
  v10.bottom = a4 + HIDWORD(v8);
  result = retstr;
  *retstr = v10;
  return result;
}
