/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x180034390
 * Callers:
 *     sub_180033EB8 @ 0x180033EB8 (sub_180033EB8.c)
 *     sub_1800515C0 @ 0x1800515C0 (sub_1800515C0.c)
 *     LdrLoadAlternateResourceModule @ 0x18007D9F0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     sub_1800107D4 @ 0x1800107D4 (sub_1800107D4.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18002B698 @ 0x18002B698 (sub_18002B698.c)
 *     sub_18002E0EC @ 0x18002E0EC (sub_18002E0EC.c)
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     RtlLcidToLocaleName @ 0x180036A00 (RtlLcidToLocaleName.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003B310 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003B460 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     sub_180041510 @ 0x180041510 (sub_180041510.c)
 *     sub_1800541C8 @ 0x1800541C8 (sub_1800541C8.c)
 *     sub_1800770AC @ 0x1800770AC (sub_1800770AC.c)
 *     sub_18007B934 @ 0x18007B934 (sub_18007B934.c)
 *     sub_180087F60 @ 0x180087F60 (sub_180087F60.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008B278 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x180090EA0 (wcsrchr.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800CC088 @ 0x1800CC088 (sub_1800CC088.c)
 *     sub_1800DB564 @ 0x1800DB564 (sub_1800DB564.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModuleEx(__int64 a1, unsigned __int16 a2, _QWORD *a3, _QWORD *a4, int a5)
{
  wchar_t *v7; // rdi
  unsigned __int64 v8; // r12
  __int64 v9; // r14
  _BYTE *v10; // rsi
  _DWORD *v11; // rax
  __int64 v12; // r8
  int v14; // r13d
  int v15; // r15d
  int v16; // eax
  unsigned __int64 v17; // rax
  int appended; // edi
  int v19; // edi
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // al
  __int64 v25; // rcx
  __int64 Heap; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // rcx
  char v32[4]; // [rsp+50h] [rbp-AB8h] BYREF
  int v33; // [rsp+54h] [rbp-AB4h]
  char v34; // [rsp+58h] [rbp-AB0h]
  unsigned __int16 v35; // [rsp+5Ah] [rbp-AAEh]
  char v36; // [rsp+5Ch] [rbp-AACh]
  unsigned int v37; // [rsp+60h] [rbp-AA8h] BYREF
  __int128 v38; // [rsp+68h] [rbp-AA0h] BYREF
  __int64 v39; // [rsp+78h] [rbp-A90h]
  __int64 v40; // [rsp+80h] [rbp-A88h] BYREF
  int v41; // [rsp+88h] [rbp-A80h] BYREF
  unsigned int v42; // [rsp+8Ch] [rbp-A7Ch] BYREF
  int v43; // [rsp+90h] [rbp-A78h]
  __int64 v44; // [rsp+98h] [rbp-A70h] BYREF
  wchar_t *Str; // [rsp+A0h] [rbp-A68h] BYREF
  _BYTE v46[2]; // [rsp+A8h] [rbp-A60h] BYREF
  __int16 v47; // [rsp+AAh] [rbp-A5Eh]
  char *v48; // [rsp+B0h] [rbp-A58h]
  __int64 v49; // [rsp+B8h] [rbp-A50h] BYREF
  unsigned __int64 v50; // [rsp+C0h] [rbp-A48h] BYREF
  wchar_t *v51; // [rsp+C8h] [rbp-A40h] BYREF
  wchar_t *v52; // [rsp+D0h] [rbp-A38h]
  __int16 v53; // [rsp+D8h] [rbp-A30h] BYREF
  __int16 v54; // [rsp+DAh] [rbp-A2Eh]
  char *v55; // [rsp+E0h] [rbp-A28h]
  _QWORD *v56; // [rsp+E8h] [rbp-A20h]
  _BYTE *v57; // [rsp+F0h] [rbp-A18h]
  __int64 v58; // [rsp+F8h] [rbp-A10h] BYREF
  _QWORD *v59; // [rsp+100h] [rbp-A08h]
  __int64 v60; // [rsp+108h] [rbp-A00h]
  int v61; // [rsp+110h] [rbp-9F8h] BYREF
  __int64 v62; // [rsp+118h] [rbp-9F0h]
  int v63; // [rsp+120h] [rbp-9E8h] BYREF
  _WORD *v64; // [rsp+128h] [rbp-9E0h]
  __int128 v65; // [rsp+130h] [rbp-9D8h] BYREF
  __int64 v66; // [rsp+140h] [rbp-9C8h] BYREF
  int v67; // [rsp+148h] [rbp-9C0h]
  _BYTE v68[56]; // [rsp+150h] [rbp-9B8h] BYREF
  char v69; // [rsp+190h] [rbp-978h] BYREF
  WCHAR SourceString[352]; // [rsp+1D0h] [rbp-938h] BYREF
  _WORD v71[352]; // [rsp+490h] [rbp-678h] BYREF
  char v72; // [rsp+750h] [rbp-3B8h] BYREF
  _BYTE v73[704]; // [rsp+800h] [rbp-308h] BYREF

  v59 = a4;
  v56 = a3;
  v35 = a2;
  v39 = a1;
  v50 = 0LL;
  v41 = 0;
  v7 = 0LL;
  Str = 0LL;
  v37 = 0;
  v8 = 0LL;
  v60 = 0LL;
  v44 = 0LL;
  v58 = 0LL;
  v34 = 0;
  v66 = 72LL;
  v67 = 1;
  memset(v68, 0, sizeof(v68));
  v32[0] = 0;
  v52 = 0LL;
  v51 = 0LL;
  v36 = 1;
  v9 = 0LL;
  v49 = 0LL;
  v10 = v73;
  v57 = v73;
  v42 = 702;
  v43 = 1;
  if ( !a1 || !v35 || !a3 )
    return 3221225485LL;
  v11 = sub_1800107D4(a1, v35, &v44, 4);
  if ( v11 == (_DWORD *)-1LL )
  {
    v14 = a5;
    v15 = a5 & 0x400000;
    if ( (a5 & 0x400000) == 0 )
    {
      *v56 = 0LL;
      return 3221946374LL;
    }
  }
  else
  {
    if ( v11 )
    {
      *a3 = v11;
      if ( v59 )
        *v59 = v44;
      v33 = 0;
      return 0LL;
    }
    v14 = a5;
    v15 = a5 & 0x400000;
  }
  v40 = 0LL;
  if ( v15 )
  {
    v16 = -1073741767;
  }
  else
  {
    v16 = sub_1800541C8(v39, SourceString, v12, &v41, &Str, &v37, &v49);
    v7 = Str;
    v9 = v49;
  }
  if ( v16 >= 0 )
  {
LABEL_13:
    v17 = v41 & 0xFFFFFFFE;
    if ( v17 >= 0x2BE )
      _report_rangecheckfailure();
    *(WCHAR *)((char *)SourceString + v17) = 0;
    if ( wcsrchr(v7, 0x7Eu) && (int)sub_1800DB564(SourceString, v7) >= 0 )
    {
      v7 = v52;
      Str = v52;
      v27 = -1LL;
      do
        ++v27;
      while ( v52[v27] );
      v37 = 2 * v27;
    }
    v64 = v71;
    v63 = 46006272;
    v62 = 0LL;
    v61 = 0;
    if ( (unsigned __int64)v37 + 12 > 0x3C )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2LL * v37 + 10);
      v8 = Heap;
      v60 = Heap;
      if ( !Heap )
      {
        appended = -1073741801;
LABEL_76:
        v33 = appended;
        goto LABEL_67;
      }
      v55 = (char *)Heap;
      v54 = 2 * (v37 + 5);
      v7 = Str;
      v9 = v49;
    }
    else
    {
      v55 = &v69;
      v54 = 60;
    }
    v53 = 0;
    appended = RtlAppendUnicodeToString(&v53, v7);
    v33 = appended;
    if ( appended < 0 )
      goto LABEL_67;
    appended = RtlAppendUnicodeToString(&v53, L".mui");
    v33 = appended;
    if ( appended < 0 )
      goto LABEL_67;
    if ( v9 )
      RtlActivateActivationContextUnsafeFast(&v66, v9);
    v19 = sub_1800770AC(&v53, v35, &v63, &v61, &v58);
    if ( v9 )
      RtlDeactivateActivationContextUnsafeFast(&v66);
    if ( v19 >= 0 )
    {
      v34 = 1;
      *((_QWORD *)&v38 + 1) = *(_QWORD *)(v58 + 8);
      LODWORD(v38) = *(_DWORD *)v58;
    }
    if ( v34 )
    {
      v48 = 0LL;
      v43 = 0;
      goto LABEL_29;
    }
    *((_QWORD *)&v38 + 1) = v71;
    LODWORD(v38) = 46006272;
    RtlAppendUnicodeToString(&v38, SourceString);
    v48 = &v72;
    v47 = 170;
    if ( (int)RtlLcidToLocaleName(v35, v46, 2LL) >= 0 )
    {
      RtlAppendUnicodeStringToString(&v38, v46);
      RtlAppendUnicodeToString(&v38, "\\");
      RtlAppendUnicodeToString(&v38, v55);
      v33 = sub_180041510(v48, *((_QWORD *)&v38 + 1), &v42, v73);
      if ( v33 == -1073741789 )
      {
        v28 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v42);
        v10 = (_BYTE *)v28;
        v57 = (_BYTE *)v28;
        if ( v28 )
          v33 = sub_180041510(v48, *((_QWORD *)&v38 + 1), &v42, v28);
      }
      if ( v33 >= 0 && (int)RtlInitUnicodeStringEx(&v65, v10) >= 0 )
      {
        v20 = v39;
        appended = sub_18002E0EC(v39, &v65, v32[0], v14, (__int64)v48, 2, &v50, &v44, &v40);
        v33 = appended;
        if ( appended >= 0 )
        {
          RtlInitUnicodeStringEx(&v38, v10);
          goto LABEL_32;
        }
        if ( appended != -1073741772 )
        {
          LOBYTE(v29) = v32[0];
          sub_1800CC088(appended, (unsigned int)&v65, v29, v14, (__int64)v46);
        }
LABEL_30:
        v21 = sub_18002E0EC(v20, &v38, v32[0], v14, (__int64)v48, v43, &v50, &v44, &v40);
        appended = v21;
        v33 = v21;
        if ( (v21 == -1073741766 || v21 == -1073741772) && (unsigned __int8)sub_18007B934(SourceString, v22, v71) )
        {
          *((_QWORD *)&v38 + 1) = v71;
          v30 = -1LL;
          do
            ++v30;
          while ( v71[v30] );
          LOWORD(v38) = 2 * v30;
          WORD1(v38) = 702;
          RtlAppendUnicodeToString(&v38, "\\");
          RtlAppendUnicodeStringToString(&v38, v46);
          RtlAppendUnicodeToString(&v38, "\\");
          RtlAppendUnicodeToString(&v38, v55);
          appended = sub_18002E0EC(v20, &v38, v32[0], v14, (__int64)v48, v43, &v50, &v44, &v40);
          v33 = appended;
        }
        goto LABEL_32;
      }
LABEL_29:
      v20 = v39;
      goto LABEL_30;
    }
    appended = -1073741811;
    goto LABEL_76;
  }
  appended = sub_180087F60(v39, SourceString, 702LL, &v41, &v51, &v37, v32);
  v33 = appended;
  if ( appended >= 0 )
  {
    v7 = v51;
    Str = v51;
    goto LABEL_13;
  }
LABEL_67:
  v20 = v39;
LABEL_32:
  v23 = v40;
  if ( !v40 )
    v23 = -1LL;
  v40 = v23;
  if ( appended == -1073741659 || appended == -1073741801 || appended == -1073741523 )
    v24 = 0;
  else
    v24 = v36;
  if ( v24 )
    sub_18002B698(v20, &v40, &v50, 0LL, v35, v15 != 0 ? 33 : 1, appended, v44);
  if ( v40 == -1 )
  {
    *v56 = 0LL;
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v25 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
    else
      v25 = 2147353477LL;
    if ( (*(_BYTE *)v25 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v31 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
      else
        v31 = 2147353476LL;
      sub_1800DBCC0(&v38, *(unsigned __int8 *)v31);
    }
    *v56 = v40;
    if ( v59 )
      *v59 = v44;
    appended = 0;
    v33 = 0;
  }
  if ( v51 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v51);
    appended = v33;
  }
  if ( v52 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v52);
    appended = v33;
  }
  if ( v8 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    appended = v33;
  }
  if ( v10 && v73 != v10 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
    return (unsigned int)v33;
  }
  return (unsigned int)appended;
}
