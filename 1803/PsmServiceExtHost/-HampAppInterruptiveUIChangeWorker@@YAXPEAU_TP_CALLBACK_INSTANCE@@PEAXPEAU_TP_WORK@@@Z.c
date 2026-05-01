/*
 * XREFs of ?HampAppInterruptiveUIChangeWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180040780
 * Callers:
 *     <none>
 * Callees:
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009928 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009954 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     _TlgCreateSid @ 0x18000EE38 (_TlgCreateSid.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall HampAppInterruptiveUIChangeWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  int v4; // eax
  __int64 v5; // r8
  unsigned __int64 v6; // r10
  __int64 v7; // rdx
  unsigned int v8; // ecx
  int v9; // edi
  DWORD v10; // ebx
  char v11; // [rsp+38h] [rbp-D0h] BYREF
  int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  _BYTE v13[144]; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F8h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+108h] [rbp+0h] BYREF
  int *v17; // [rsp+118h] [rbp+10h]
  int v18; // [rsp+120h] [rbp+18h]
  int v19; // [rsp+124h] [rbp+1Ch]
  char *v20; // [rsp+128h] [rbp+20h]
  int v21; // [rsp+130h] [rbp+28h]
  int v22; // [rsp+134h] [rbp+2Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  while ( 1 )
  {
    HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)a2);
    v8 = *((_DWORD *)a2 + 152);
    v9 = (v8 >> 21) & 1;
    if ( ((v8 >> 20) & 1) == v9 )
      break;
    *((_DWORD *)a2 + 152) = (v9 << 20) | v8 & 0xFFEFFFFF;
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)a2, v7);
    if ( _volatile_metadata > 4u )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)a2 + 48);
      TlgCreateSid(&v16, (const SID *)(*((_QWORD *)a2 + 11) + 228LL));
      v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 88LL) + 160LL) + 88LL);
      v19 = 0;
      v22 = 0;
      v12 = v4;
      v17 = &v12;
      v20 = &v11;
      v18 = 4;
      v11 = v9;
      v21 = 1;
      TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800832E0, 0LL, 0LL, 6u, &pData);
    }
    v5 = *((_QWORD *)a2 + 11);
    v6 = *(_QWORD *)((*(_QWORD *)((*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFFCuLL) - 8) & 0xFFFFFFFFFFFFFFFCuLL) - 8) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)(v6 - 768) & 1) != 0 )
      RmRpsNotifyApplicationInterruptiveUIChange(
        *(_QWORD *)(v6 - 776),
        a2 + 96,
        v5 + 228,
        *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v5 + 88) + 160LL) + 88LL),
        v9);
  }
  *((_DWORD *)a2 + 152) = v8 & 0xFFBFFFFF;
  HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)a2, v7);
  CemRcObjectDereference((struct _CEM_RC_OBJECT *)a2);
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
}
