/*
 * XREFs of ?OnPersistState@CMuteSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800844E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 */

void __fastcall CMuteSoftware::OnPersistState(
        struct _TP_CALLBACK_INSTANCE *a1,
        CMuteSoftware *a2,
        struct _TP_TIMER *a3)
{
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x4000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids, a2);
  }
  CMuteSoftware::PersistMuteState(a2);
}
