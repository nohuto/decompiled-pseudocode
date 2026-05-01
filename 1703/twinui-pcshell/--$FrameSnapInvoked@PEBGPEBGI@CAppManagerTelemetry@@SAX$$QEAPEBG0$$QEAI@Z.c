/*
 * XREFs of ??$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z @ 0x18004E674
 * Callers:
 *     ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x18004D87C (-_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOC.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026994 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall CAppManagerTelemetry::FrameSnapInvoked<unsigned short const *,unsigned short const *,unsigned int>(
        void **a1,
        void **a2,
        __int64 a3)
{
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // r10
  void *v8; // rdx
  void *v9; // r8
  __int64 v10; // rax
  void *v11; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-78h] BYREF
  void *v14; // [rsp+50h] [rbp-58h]
  int v15; // [rsp+58h] [rbp-50h]
  int v16; // [rsp+5Ch] [rbp-4Ch]
  void *v17; // [rsp+60h] [rbp-48h]
  int v18; // [rsp+68h] [rbp-40h]
  int v19; // [rsp+6Ch] [rbp-3Ch]
  __int64 v20; // [rsp+70h] [rbp-38h]
  __int64 v21; // [rsp+78h] [rbp-30h]

  v6 = CAppManagerLogging::Provider();
  v7 = v6;
  if ( *(_DWORD *)v6 > 5u )
  {
    LODWORD(v6) = 0;
    if ( (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
    {
      v8 = &unk_1801C6ABC;
      v9 = &unk_1801C6ABC;
      LODWORD(v10) = 0;
      if ( *a1 )
      {
        v9 = *a1;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_WORD *)*a1 + v10) );
      }
      v11 = *a2;
      v15 = 2 * v10 + 2;
      LODWORD(v10) = 0;
      v14 = v9;
      v16 = 0;
      if ( v11 )
      {
        v8 = v11;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_WORD *)v11 + v10) );
      }
      v17 = v8;
      v18 = 2 * v10 + 2;
      v19 = 0;
      v20 = a3;
      v21 = 4LL;
      LODWORD(v6) = TlgWrite(v7, &unk_1801F4E7B, 0LL, 0LL, 5u, &pData);
    }
  }
  return (int)v6;
}
