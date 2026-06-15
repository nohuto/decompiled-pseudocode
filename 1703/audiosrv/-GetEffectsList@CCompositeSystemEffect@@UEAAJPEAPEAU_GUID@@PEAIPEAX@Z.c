/*
 * XREFs of ?GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180039510
 * Callers:
 *     ?FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z @ 0x180032C50 (-FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180038FC0 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 *     PackSysFx2List @ 0x1800393D0 (PackSysFx2List.c)
 * Callees:
 *     ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1800337D0 (-GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     memset @ 0x180049B8A (memset.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositeSystemEffect::GetEffectsList(
        CCompositeSystemEffect *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  _QWORD *v4; // rbp
  char *v5; // r15
  int v6; // r13d
  unsigned int v7; // r12d
  int v9; // edi
  __int64 v10; // r14
  CAPOWrapperClient *v11; // rcx
  int (__fastcall *v12)(CAPOWrapperClient *, struct _GUID **, unsigned int *, void *); // rax
  int EffectsList; // eax
  unsigned int v14; // ebx
  int v15; // ebx
  __int64 v16; // rax
  struct _GUID **v17; // rcx
  int v18; // edx
  int v19; // ebx
  __int64 v20; // rax
  unsigned int *v21; // rcx
  SIZE_T v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _GUID *v27; // r15
  int v28; // r12d
  int v29; // r14d
  __int64 v30; // rsi
  void *v31; // rbp
  struct _GUID *v32; // rcx
  unsigned __int64 v33; // rdi
  int v34; // [rsp+20h] [rbp-78h]
  int v35; // [rsp+30h] [rbp-68h]
  unsigned int v36; // [rsp+34h] [rbp-64h] BYREF
  int v37; // [rsp+38h] [rbp-60h]
  unsigned int v38; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v39; // [rsp+40h] [rbp-58h]
  char *v40; // [rsp+48h] [rbp-50h]
  _QWORD *v41; // [rsp+50h] [rbp-48h]
  struct _GUID *v42[8]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  void *v46; // [rsp+B8h] [rbp+20h]

  v46 = a4;
  v4 = 0LL;
  v41 = 0LL;
  v5 = 0LL;
  v37 = 0;
  v6 = 0;
  v40 = 0LL;
  v7 = 0;
  v35 = 0;
  v38 = 0;
  if ( !a2 || !a3 )
  {
    v14 = -2147467261;
    goto LABEL_31;
  }
  *a2 = 0LL;
  v9 = 0;
  *a3 = 0;
  if ( *((int *)this + 20) <= 0 )
    goto LABEL_30;
  v10 = 0LL;
  do
  {
    if ( v10 < 0 || v9 >= *((_DWORD *)this + 20) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x18005D598LL);
    }
    v11 = *(CAPOWrapperClient **)(v10 + *((_QWORD *)this + 9));
    v12 = *(int (__fastcall **)(CAPOWrapperClient *, struct _GUID **, unsigned int *, void *))(*(_QWORD *)v11 + 24LL);
    if ( v12 == CAPOWrapperClient::GetEffectsList )
      EffectsList = CAPOWrapperClient::GetEffectsList(v11, v42, &v36, a4);
    else
      EffectsList = ((__int64 (__fastcall *)(CAPOWrapperClient *, struct _GUID **, unsigned int *))v12)(v11, v42, &v36);
    v14 = EffectsList;
    if ( EffectsList < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x433,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)EffectsList,
        v34);
      goto LABEL_31;
    }
    if ( v6 == v37 )
    {
      if ( v37 )
      {
        v15 = 2 * v6;
        if ( (v6 & 0x40000000) != 0 || (unsigned int)v15 > 0xFFFFFFF )
          goto LABEL_19;
      }
      else
      {
        v15 = 1;
      }
      v16 = _o__recalloc(v4, v15, 8LL);
      if ( !v16 )
        goto LABEL_19;
      v37 = v15;
      v4 = (_QWORD *)v16;
      v41 = (_QWORD *)v16;
    }
    v17 = (struct _GUID **)&v4[v6];
    if ( v17 )
      *v17 = v42[0];
    ++v6;
LABEL_19:
    v18 = v35;
    if ( v35 == v38 )
    {
      if ( v38 )
      {
        v19 = 2 * v35;
        if ( (v35 & 0x40000000) != 0 || (unsigned int)v19 > 0x1FFFFFFF )
          goto LABEL_28;
      }
      else
      {
        v19 = 1;
      }
      v20 = _o__recalloc(v5, v19, 4LL);
      if ( !v20 )
        goto LABEL_28;
      v18 = v35;
      v5 = (char *)v20;
      v38 = v19;
      v40 = (char *)v20;
    }
    v21 = (unsigned int *)&v5[4 * v18];
    if ( v21 )
      *v21 = v36;
    v35 = v18 + 1;
LABEL_28:
    v7 += v36;
    ++v9;
    a4 = v46;
    v10 += 8LL;
    v39 = v7;
  }
  while ( v9 < *((_DWORD *)this + 20) );
  if ( !v7 )
    goto LABEL_30;
  v23 = 16LL * v7;
  v27 = (struct _GUID *)CoTaskMemAlloc(v23);
  if ( !v27 )
  {
    v5 = v40;
    v14 = -2147024882;
    goto LABEL_31;
  }
  v28 = 0;
  v29 = 0;
  if ( v6 > 0 )
  {
    v30 = 0LL;
    while ( 1 )
    {
      if ( v30 < 0 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x18005D560LL);
      }
      v31 = (void *)v4[v30];
      if ( v29 >= v35 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x18005D54ALL);
      }
      v32 = &v27[v28];
      v38 = *(_DWORD *)&v40[4 * v30];
      v33 = 16LL * v38;
      if ( !v33 )
        goto LABEL_55;
      if ( !v32 )
        break;
      if ( v31 && v23 >= v33 )
      {
        memcpy_0(v32, v31, 16LL * v38);
      }
      else
      {
        memset(v32, 0, v23);
        if ( !v31 )
          break;
        if ( v23 < v33 )
        {
          *(_DWORD *)_o__errno(v32, v24, v25, v26) = 34;
          goto LABEL_54;
        }
      }
LABEL_55:
      v28 += v38;
      v23 -= v33;
      CoTaskMemFree(v31);
      v4 = v41;
      ++v29;
      ++v30;
      if ( v29 >= v6 )
        goto LABEL_56;
    }
    *(_DWORD *)_o__errno(v32, v24, v25, v26) = 22;
LABEL_54:
    invalid_parameter_noinfo();
    goto LABEL_55;
  }
LABEL_56:
  *a2 = v27;
  v5 = v40;
  *a3 = v39;
LABEL_30:
  v14 = 0;
LABEL_31:
  if ( v5 )
    free(v5);
  if ( v4 )
    free(v4);
  return v14;
}
