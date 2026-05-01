/*
 * XREFs of ??$EventQueued@PEBGPEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG00@Z @ 0x180184268
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180180F38 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18009F4C4 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall SingleViewExperienceTelemetry::OnPropertyChanged::EventQueued<unsigned short const *,unsigned short const *,unsigned short const *>(
        __int64 a1,
        void **a2,
        void **a3,
        void **a4)
{
  const struct _TlgProvider_t *v8; // rax
  const struct _TlgProvider_t *v9; // r10
  void *v10; // r8
  void *v11; // rdx
  __int64 v12; // rax
  void *v13; // rcx
  void *v14; // rdx
  void *v15; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-78h] BYREF
  void *v18; // [rsp+50h] [rbp-58h]
  int v19; // [rsp+58h] [rbp-50h]
  int v20; // [rsp+5Ch] [rbp-4Ch]
  void *v21; // [rsp+60h] [rbp-48h]
  int v22; // [rsp+68h] [rbp-40h]
  int v23; // [rsp+6Ch] [rbp-3Ch]
  void *v24; // [rsp+70h] [rbp-38h]
  int v25; // [rsp+78h] [rbp-30h]
  int v26; // [rsp+7Ch] [rbp-2Ch]

  v8 = SingleViewExperienceLogging::Provider();
  v9 = v8;
  if ( *(_DWORD *)v8 > 5u )
  {
    LODWORD(v8) = 0;
    if ( (*((_QWORD *)v9 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v9 + 3) & 0x200000000000LL) == *((_QWORD *)v9 + 3) )
    {
      v10 = &unk_1801C6ABC;
      v11 = &unk_1801C6ABC;
      LODWORD(v12) = 0;
      if ( *a2 )
      {
        v11 = *a2;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_WORD *)*a2 + v12) );
      }
      v13 = *a3;
      v19 = 2 * v12 + 2;
      LODWORD(v12) = 0;
      v18 = v11;
      v14 = &unk_1801C6ABC;
      v20 = 0;
      if ( v13 )
      {
        v14 = v13;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_WORD *)v13 + v12) );
      }
      v15 = *a4;
      v22 = 2 * v12 + 2;
      LODWORD(v12) = 0;
      v21 = v14;
      v23 = 0;
      if ( v15 )
      {
        v10 = v15;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_WORD *)v15 + v12) );
      }
      v24 = v10;
      v25 = 2 * v12 + 2;
      v26 = 0;
      LODWORD(v8) = TlgWrite(v9, &unk_180204151, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &pData);
    }
  }
  return (int)v8;
}
