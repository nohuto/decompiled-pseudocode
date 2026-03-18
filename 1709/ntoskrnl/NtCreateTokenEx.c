/*
 * XREFs of NtCreateTokenEx @ 0x14045D140
 * Callers:
 *     NtCreateToken @ 0x14072DF40 (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x14001386C (SepCreateTokenEx.c)
 *     SeCaptureAcl @ 0x14045C3BC (SeCaptureAcl.c)
 *     SeReleaseAcl @ 0x14045D074 (SeReleaseAcl.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14045DA2C (SeReleaseLuidAndAttributesArray.c)
 *     SeReleaseSid @ 0x140460948 (SeReleaseSid.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x14046C5E4 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14046C82C (SepCaptureTokenSecurityAttributesInformation.c)
 *     SeCaptureSid @ 0x140487010 (SeCaptureSid.c)
 *     SeCaptureSidAndAttributesArray @ 0x140488B20 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSecurityQos @ 0x1404C6AD4 (SeCaptureSecurityQos.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14053A0EC (SeCaptureLuidAndAttributesArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateTokenEx(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void *Src,
        ULONG *a8,
        int *a9,
        unsigned __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17)
{
  _QWORD *v18; // rbx
  char PreviousMode; // si
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  void **v22; // r12
  char **v23; // r13
  int *v24; // r14
  unsigned __int64 v25; // r15
  __int64 result; // rax
  __int64 v27; // rdx
  int v28; // edi
  __int64 v29; // r8
  __int64 v30; // r9
  ULONG v31; // ebx
  POOL_TYPE PoolType; // [rsp+20h] [rbp-198h]
  int v33; // [rsp+28h] [rbp-190h]
  int v34; // [rsp+28h] [rbp-190h]
  int v35; // [rsp+30h] [rbp-188h]
  int v36; // [rsp+30h] [rbp-188h]
  char v37; // [rsp+C0h] [rbp-F8h] BYREF
  char v38; // [rsp+C1h] [rbp-F7h]
  char v39; // [rsp+C2h] [rbp-F6h]
  int v40; // [rsp+C4h] [rbp-F4h]
  __int64 v41; // [rsp+C8h] [rbp-F0h] BYREF
  int v42; // [rsp+D0h] [rbp-E8h]
  int v43; // [rsp+D4h] [rbp-E4h]
  ULONG Count; // [rsp+D8h] [rbp-E0h]
  __int64 v45; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+E8h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-C8h] BYREF
  PSID v48; // [rsp+F8h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+110h] [rbp-A8h] BYREF
  PVOID P; // [rsp+118h] [rbp-A0h] BYREF
  PVOID v53; // [rsp+120h] [rbp-98h] BYREF
  __int64 v54; // [rsp+128h] [rbp-90h] BYREF
  __int64 v55; // [rsp+130h] [rbp-88h] BYREF
  int v56[2]; // [rsp+138h] [rbp-80h] BYREF
  __int64 v57; // [rsp+140h] [rbp-78h] BYREF
  __int64 v58; // [rsp+148h] [rbp-70h] BYREF
  __int64 v59; // [rsp+150h] [rbp-68h] BYREF
  _BYTE v60[4]; // [rsp+158h] [rbp-60h] BYREF
  int v61; // [rsp+15Ch] [rbp-5Ch]
  __int64 v62[2]; // [rsp+168h] [rbp-50h] BYREF

  v18 = a1;
  *(_QWORD *)v56 = 0LL;
  v37 = 0;
  v45 = 0LL;
  v54 = 0LL;
  Count = 0;
  v46 = 0LL;
  v41 = 0LL;
  v43 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v38 = 0;
  P = 0LL;
  v53 = 0LL;
  v42 = 0;
  v51 = 0LL;
  LODWORD(v55) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v39 = PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( PreviousMode )
  {
    v20 = 0x7FFFFFFF0000LL;
    v21 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v18 < 0x7FFFFFFF0000LL )
      v21 = (__int64)v18;
    *(_QWORD *)v21 = *(_QWORD *)v21;
    if ( (a6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)a8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)a9 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a17 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = (void **)a14;
    if ( a14 && (a14 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a15 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = (char **)a16;
    if ( a16 && (a16 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a13 && (a13 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = (int *)a12;
    if ( a12 && (a12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a11 && (a11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v25 = a10;
    if ( a10 )
    {
      if ( (a10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a10 < 0x7FFFFFFF0000LL )
        v20 = a10;
    }
  }
  else
  {
    v23 = (char **)a16;
    v22 = (void **)a14;
    v24 = (int *)a12;
    v25 = a10;
  }
  if ( (unsigned int)(a4 - 1) > 1 )
    return 3221225640LL;
  LOBYTE(v20) = PreviousMode;
  result = SeCaptureSecurityQos(a3, v20, &v37, v60);
  if ( (int)result >= 0 )
  {
    if ( !v37 && a4 == 2 )
      return 3221225637LL;
    v40 = 0;
    v59 = *(_QWORD *)a5;
    v58 = *(_QWORD *)a6;
    v28 = SeCaptureSidAndAttributesArray(Src, 0, v33, v35, (__int64)&v45, (__int64)&v54);
    v40 = v28;
    if ( v28 >= 0 )
    {
      Count = *a8;
      v31 = Count;
      v28 = SeCaptureSidAndAttributesArray(a8 + 2, 0, v34, v36, (__int64)&v46, (__int64)&v41);
      v40 = v28;
      LODWORD(v41) = (-16 * v31 + v41 + 3) & 0xFFFFFFFC;
      v18 = a1;
    }
    if ( v28 >= 0 )
    {
      v43 = *a9;
      v28 = SeCaptureLuidAndAttributesArray(a9 + 1, PoolType, v34, v36, (__int64)&v47, (__int64)&v54 + 4);
      v40 = v28;
    }
    if ( v22 )
    {
      if ( v28 < 0 )
      {
LABEL_53:
        if ( v23 && v28 >= 0 && *v23 )
        {
          v28 = SeCaptureAcl(*v23, PreviousMode, v29, v30, NonPagedPoolNx, v34, (PVOID *)&v50, (unsigned int *)&v57);
          v40 = v28;
        }
        *(_OWORD *)v62 = *(_OWORD *)a17;
        if ( v24 && v28 >= 0 )
        {
          v42 = *v24;
          v28 = SeCaptureSidAndAttributesArray(v24 + 2, 0, v34, v36, (__int64)&v51, (__int64)&v55);
          v40 = v28;
        }
        if ( v25 && v28 >= 0 )
        {
          LOBYTE(v27) = PreviousMode;
          v28 = SepCaptureTokenSecurityAttributesInformation(v25, v27, 0LL, &P);
          v40 = v28;
        }
        if ( a11 && v28 >= 0 )
        {
          LOBYTE(v27) = PreviousMode;
          v28 = SepCaptureTokenSecurityAttributesInformation(a11, v27, 0LL, &v53);
          v40 = v28;
        }
        if ( a13 && v28 >= 0 )
        {
          HIDWORD(v41) = *(_DWORD *)a13;
          v38 = 1;
        }
        if ( v28 >= 0 )
        {
          LOBYTE(v27) = PreviousMode;
          v28 = SepCreateTokenEx(
                  (HANDLE *)v56,
                  v27,
                  a2,
                  a3,
                  a4,
                  v61,
                  (__int64)&v59,
                  &v58,
                  (struct _SID_AND_ATTRIBUTES *)v45,
                  Count,
                  (struct _SID_AND_ATTRIBUTES *)v46,
                  v41,
                  v43,
                  (char **)v47,
                  v48,
                  (void *)v49,
                  (void *)v50,
                  v62,
                  (__int64)P,
                  (__int64)v53,
                  v42,
                  v51,
                  (_DWORD *)(((unsigned __int64)&v41 + 4) & -(__int64)(v38 != 0)),
                  0);
        }
        if ( v45 )
        {
          LOBYTE(v27) = PreviousMode;
          SeReleaseLuidAndAttributesArray(v45, v27);
        }
        if ( v46 )
        {
          LOBYTE(v27) = PreviousMode;
          SeReleaseLuidAndAttributesArray(v46, v27);
        }
        if ( v47 )
        {
          LOBYTE(v27) = PreviousMode;
          SeReleaseLuidAndAttributesArray(v47, v27);
        }
        if ( v48 )
        {
          LOBYTE(v29) = 1;
          LOBYTE(v27) = PreviousMode;
          SeReleaseSid(v48, v27, v29);
        }
        if ( v49 )
        {
          LOBYTE(v29) = 1;
          LOBYTE(v27) = PreviousMode;
          SeReleaseSid(v49, v27, v29);
        }
        if ( v50 )
          SeReleaseAcl((void *)v50, PreviousMode);
        if ( v51 )
        {
          LOBYTE(v27) = PreviousMode;
          SeReleaseLuidAndAttributesArray(v51, v27);
        }
        if ( P )
          SepFreeCapturedTokenSecurityAttributesInformation(P);
        if ( v53 )
          SepFreeCapturedTokenSecurityAttributesInformation(v53);
        if ( v28 >= 0 )
          *v18 = *(_QWORD *)v56;
        return (unsigned int)v28;
      }
      v28 = SeCaptureSid(*v22, PoolType, 1, (__int64)&v48);
      v40 = v28;
    }
    if ( v28 >= 0 )
    {
      v28 = SeCaptureSid(*(void **)a15, PoolType, 1, (__int64)&v49);
      v40 = v28;
    }
    goto LABEL_53;
  }
  return result;
}
