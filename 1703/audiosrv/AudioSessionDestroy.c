/*
 * XREFs of AudioSessionDestroy @ 0x180032940
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180020B80 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180020EB0 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionDestroy(CServerAudioSessionControl **a1)
{
  CServerAudioSessionControl *v1; // rbx
  unsigned __int32 v3; // edi
  __int64 (__fastcall *v4)(CServerAudioSessionControl *); // rax
  __int64 (__fastcall *v6)(CServerAudioSessionControl *); // rax

  v1 = *a1;
  v3 = _InterlockedDecrement((volatile signed __int32 *)*a1 + 6);
  if ( !v3 )
  {
    v6 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v1 + 104LL);
    if ( v6 == CServerAudioSessionControl::Dispose )
      CServerAudioSessionControl::Dispose(v1);
    else
      v6(v1);
  }
  v4 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v1 + 16LL);
  if ( v4 == CServerAudioSessionControl::Release )
    CServerAudioSessionControl::Release(v1);
  else
    v4(v1);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, v3);
  }
  *a1 = 0LL;
  return 0LL;
}
