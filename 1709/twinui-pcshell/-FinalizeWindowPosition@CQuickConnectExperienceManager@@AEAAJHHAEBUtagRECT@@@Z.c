/*
 * XREFs of ?FinalizeWindowPosition@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1800C67A8
 * Callers:
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800C6168 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?StartActivity@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C396C (-StartActivity@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?ExperienceManager_FinalizeWindowPosition_FixedPosition@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C3A98 (-ExperienceManager_FinalizeWindowPosition_FixedPosition@ExperienceManager_FinalizeWindowPosition.c)
 *     ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800C4204 (--1-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C7694 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C7DB8 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$ExperienceManager_FinalizeWindowPosition_Finalized@AEAJAEAJAEAJAEAJ@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXAEAJ000@Z @ 0x1800C8D40 (--$ExperienceManager_FinalizeWindowPosition_Finalized@AEAJAEAJAEAJAEAJ@ExperienceManager_Finaliz.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall CQuickConnectExperienceManager::FinalizeWindowPosition(
        CQuickConnectExperienceManager *this,
        int a2,
        int a3,
        const struct tagRECT *a4)
{
  int *v8; // r8
  float v9; // xmm2_4
  int v10; // edx
  int *v11; // rcx
  int v12; // eax
  int v13; // edx
  float v14; // xmm0_4
  int v15; // eax
  float v16; // xmm2_4
  int v17; // r10d
  int v18; // r9d
  float v19; // xmm0_4
  float v20; // xmm1_4
  LONG v21; // r10d
  _QWORD v23[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+50h] [rbp-B0h]
  int *v25; // [rsp+58h] [rbp-A8h]
  int *v26; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+68h] [rbp-98h] BYREF
  char v28; // [rsp+6Ch] [rbp-94h]
  int v29; // [rsp+90h] [rbp-70h] BYREF
  const char *v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+A0h] [rbp-60h]
  char v32; // [rsp+A8h] [rbp-58h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  _BYTE v34[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v35; // [rsp+148h] [rbp+48h]
  __int64 v36; // [rsp+150h] [rbp+50h]
  __int64 v37; // [rsp+158h] [rbp+58h]
  __int64 v38; // [rsp+160h] [rbp+60h]

  v33 = 1LL;
  v23[1] = 0LL;
  v23[2] = v23;
  v23[3] = 0LL;
  v25 = &v29;
  v24 = 0;
  v26 = &v27;
  v27 = 0;
  v30 = "ExperienceManager_FinalizeWindowPosition";
  v28 = 0;
  v32 = 0;
  v29 = 0;
  v31 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  memset(v34, 0, sizeof(v34));
  v37 = 0LL;
  v23[0] = &QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::`vftable';
  v38 = 0LL;
  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::StartActivity((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition *)v23);
  if ( !*((_BYTE *)this + 381) )
  {
    if ( a3 == *((_DWORD *)this + 94) )
    {
      *((_BYTE *)this + 381) = 1;
      QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::ExperienceManager_FinalizeWindowPosition_FixedPosition((QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition *)v23);
    }
    v8 = (int *)((char *)this + 388);
    if ( *((_DWORD *)this + 88) != 2 )
    {
      if ( *((_DWORD *)this + 88) == 3 )
      {
        v16 = *((float *)this + 84);
        v13 = (_DWORD)this + 384;
        *((_DWORD *)this + 96) = (int)(float)(v16 - (float)a2);
        v15 = (int)v16;
      }
      else
      {
        if ( *((_DWORD *)this + 88) != 4 )
        {
          v9 = *((float *)this + 85);
          v10 = *v8;
          if ( *v8 > (int)(float)(v9 - (float)a3) || (v11 = (int *)((char *)this + 396), v10 == *((_DWORD *)this + 99)) )
          {
            v11 = (int *)((char *)this + 396);
            *((_DWORD *)this + 99) = (int)v9;
            *v8 = (int)v9 - a3;
            goto LABEL_21;
          }
          v12 = v10 + a3;
LABEL_20:
          *v11 = v12;
LABEL_21:
          v20 = *((float *)this + 84);
          v21 = (int)(float)((float)((float)(*((float *)this + 86) - (float)a2) * 0.5) + v20);
          if ( v21 >= a4->left )
          {
            if ( v21 + a2 <= a4->right )
            {
LABEL_25:
              v18 = (_DWORD)this + 392;
              v13 = (_DWORD)this + 384;
              *((_DWORD *)this + 98) = v21 + a2;
              *((_DWORD *)this + 96) = v21;
LABEL_26:
              QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::ExperienceManager_FinalizeWindowPosition_Finalized<long &,long &,long &,long &>(
                (unsigned int)v23,
                v13,
                (_DWORD)v8,
                v18,
                (__int64)v11);
              wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v23);
              goto LABEL_27;
            }
            v20 = (float)(v20 + *((float *)this + 86)) - (float)a2;
          }
          v21 = (int)v20;
          goto LABEL_25;
        }
        v13 = (_DWORD)this + 384;
        v14 = *((float *)this + 86) + *((float *)this + 84);
        *((_DWORD *)this + 96) = (int)v14;
        v15 = a2 + (int)v14;
      }
      v17 = *v8;
      v11 = (int *)((char *)this + 396);
      v18 = (_DWORD)this + 392;
      *((_DWORD *)this + 98) = v15;
      if ( v17 == *((_DWORD *)this + 99) )
        v17 = (int)*((float *)this + 85);
      if ( v17 + a3 > a4->bottom )
        v17 = (int)(float)((float)(*((float *)this + 87) + *((float *)this + 85)) - (float)a3);
      *v8 = v17;
      *v11 = v17 + a3;
      goto LABEL_26;
    }
    v11 = (int *)((char *)this + 396);
    v19 = *((float *)this + 87) + *((float *)this + 85);
    *v8 = (int)v19;
    v12 = a3 + (int)v19;
    goto LABEL_20;
  }
  *((_DWORD *)this + 99) = a3 + *((_DWORD *)this + 97);
  QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::ExperienceManager_FinalizeWindowPosition_Finalized<long &,long &,long &,long &>(
    (unsigned int)v23,
    (_DWORD)this + 384,
    (_DWORD)this + 388,
    (_DWORD)this + 392,
    (__int64)this + 396);
LABEL_27:
  v23[0] = &QuickConnectTelemetry::ExperienceManager_FinalizeWindowPosition::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v23);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v23);
  return 0LL;
}
