/*
 * XREFs of ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C00B0340
 * Callers:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00AE5DC (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003E0AC (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C003E0E8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00AA600 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00B348C (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C00B353C (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     ?bIs1@EFLOAT@@QEAAHXZ @ 0x1C012E744 (-bIs1@EFLOAT@@QEAAHXZ.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C0137F18 (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall bGetNtoW_Win31(
        struct MATRIX *a1,
        struct tagLOGFONTW *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        int a6)
{
  __int64 v6; // r10
  struct DCOBJ *v7; // rsi
  struct IFIOBJ *v8; // r12
  BOOL v10; // r13d
  BOOL v11; // r14d
  LONG lfHeight; // ebx
  int v13; // r15d
  LONG DefaultWorldHeight; // eax
  __int64 v15; // rcx
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm3_4
  float v19; // xmm1_4
  __int64 v20; // rcx
  int *v21; // rax
  int v22; // edx
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm4_4
  int v26; // edx
  __int64 result; // rax
  struct tagLOGFONTW *v28; // rsi
  int lfWidth; // edx
  __int64 v30; // rbx
  float v31; // xmm6_4
  float v32; // xmm2_4
  int v33; // r10d
  float v34; // xmm0_4
  __int64 v35; // rax
  __int64 v36; // rax
  float v37; // xmm0_4
  __int64 v38; // rdx
  int v39; // r14d
  struct _KTHREAD *CurrentThread; // rbx
  int v41; // esi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v47; // rbx
  __int64 CurrentProcessWin32Process; // rax
  _DWORD *v49; // rbx
  int v50; // r15d
  int v51; // r12d
  struct _KTHREAD *v52; // rsi
  __int64 v53; // rdx
  __int64 *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rax
  int v58; // eax
  int v59; // ebx
  __int64 v60; // rdx
  int v61; // eax
  int v62; // ecx
  __int64 v63; // rax
  int lfOrientation; // eax
  __m128i v65; // xmm0
  int v66; // eax
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  float v69; // [rsp+28h] [rbp-B9h] BYREF
  float v70; // [rsp+2Ch] [rbp-B5h] BYREF
  float v71; // [rsp+30h] [rbp-B1h] BYREF
  float v72; // [rsp+38h] [rbp-A9h] BYREF
  float v73; // [rsp+3Ch] [rbp-A5h] BYREF
  float v74; // [rsp+40h] [rbp-A1h] BYREF
  int v75; // [rsp+44h] [rbp-9Dh]
  _DWORD *v76; // [rsp+48h] [rbp-99h] BYREF
  __int64 v77; // [rsp+50h] [rbp-91h]
  struct tagLOGFONTW *v78; // [rsp+58h] [rbp-89h]
  struct IFIOBJ *v79; // [rsp+60h] [rbp-81h]
  struct MATRIX *v80; // [rsp+68h] [rbp-79h] BYREF
  int v81; // [rsp+74h] [rbp-6Dh]
  _DWORD v82[4]; // [rsp+78h] [rbp-69h] BYREF
  __int64 v83; // [rsp+88h] [rbp-59h]
  _OWORD v84[2]; // [rsp+A0h] [rbp-41h] BYREF
  int v85; // [rsp+C0h] [rbp-21h]

  v6 = *(_QWORD *)a4;
  v7 = (struct DCOBJ *)a4;
  v79 = (struct IFIOBJ *)a3;
  v8 = (struct IFIOBJ *)a3;
  v78 = a2;
  v10 = *(float *)(v6 + 468) != 0.0 && !(unsigned int)EFLOAT::bIsZero((EFLOAT *)(v6 + 472));
  v11 = (a5 & 2) == 0 && (v10 || (*(_DWORD *)(*(_QWORD *)(v6 + 80) + 352LL) & 0x1000) == 0);
  lfHeight = a2->lfHeight;
  v13 = 1;
  v75 = 1;
  if ( !lfHeight )
  {
    DefaultWorldHeight = lGetDefaultWorldHeight(v7);
    a2 = v78;
    lfHeight = DefaultWorldHeight;
  }
  if ( gbShellFontCompatible && !_wcsicmp(a2->lfFaceName, L"MS Shell Dlg") && !a6 )
  {
    if ( lfHeight <= 0 )
    {
      if ( (unsigned int)(lfHeight + 12) > 3 )
      {
        if ( (unsigned int)(lfHeight + 15) > 2 )
          goto LABEL_30;
        lfHeight = -13;
      }
      else
      {
        lfHeight = -11;
      }
LABEL_24:
      lfHeight = -lfHeight;
      v15 = (unsigned int)*(__int16 *)(*(_QWORD *)v8 + 56LL);
      goto LABEL_25;
    }
    if ( lfHeight >= 12 )
    {
      if ( lfHeight <= 15 )
      {
        lfHeight = 14;
        v15 = (unsigned int)(*(__int16 *)(*(_QWORD *)v8 + 60LL) + *(__int16 *)(*(_QWORD *)v8 + 62LL));
        goto LABEL_25;
      }
      if ( lfHeight <= 19 )
      {
        lfHeight = 16;
        v15 = (unsigned int)(*(__int16 *)(*(_QWORD *)v8 + 60LL) + *(__int16 *)(*(_QWORD *)v8 + 62LL));
        goto LABEL_25;
      }
    }
  }
LABEL_30:
  if ( lfHeight <= 0 )
    goto LABEL_24;
  v15 = (unsigned int)(*(__int16 *)(*(_QWORD *)v8 + 60LL) + *(__int16 *)(*(_QWORD *)v8 + 62LL));
LABEL_25:
  v16 = (float)lfHeight / (float)(int)v15;
  v17 = v16;
  v73 = v16;
  *((float *)a1 + 3) = v16;
  if ( v11 )
  {
    if ( v10 )
    {
      v18 = *(float *)(*(_QWORD *)v7 + 468LL);
      v19 = *(float *)(*(_QWORD *)v7 + 472LL);
      v69 = v18;
      v72 = v19;
    }
    else
    {
      v20 = *(_QWORD *)v7;
      v21 = *(int **)(*(_QWORD *)v7 + 80LL);
      v22 = v21[88];
      if ( (v22 & 0x1000) != 0 )
      {
        v18 = v69;
        v19 = v72;
      }
      else if ( (v22 & 2) != 0 )
      {
        v18 = *(float *)(v20 + 336) * 0.0625;
        v19 = *(float *)(v20 + 348) * 0.0625;
        v69 = v18;
        v72 = v19;
      }
      else
      {
        v23 = (float)v21[87];
        v24 = (float)v21[83];
        v18 = (float)v21[86] / (float)v21[82];
        v69 = v18;
        v19 = v23 / v24;
        v72 = v23 / v24;
      }
    }
    v75 = EFLOAT::bIs1((EFLOAT *)&v69);
    v13 = v75;
    if ( !(unsigned int)EFLOAT::bIs1((EFLOAT *)&v72) )
      v73 = v25 * v19;
    EFLOAT::vAbs((EFLOAT *)&v73);
    v17 = v73;
    if ( v26 )
      *((_DWORD *)a1 + 3) ^= _xmm;
  }
  else
  {
    v18 = v69;
  }
  result = *(_QWORD *)(*(_QWORD *)v7 + 48LL);
  v76 = (_DWORD *)result;
  if ( result )
  {
    v28 = v78;
    lfWidth = v78->lfWidth;
    if ( !lfWidth )
      goto LABEL_62;
    v30 = *(_QWORD *)v8;
    v31 = (float)*(__int16 *)(*(_QWORD *)v8 + 76LL);
    v32 = v31 * v17;
    if ( lfWidth < 0 )
      lfWidth = -lfWidth;
    v33 = 1;
    v71 = *(float *)&lfWidth;
    v34 = (float)lfWidth;
    v74 = (float)lfWidth;
    if ( v11 )
    {
      if ( !v13 )
      {
        v74 = v34 * v18;
        bFToL(v15, &v71, 6LL);
      }
      EFLOAT::vAbs((EFLOAT *)&v74);
      v34 = v74;
      if ( lfWidth < 0 )
        lfWidth = -lfWidth;
    }
    v71 = v32;
    a4 = LODWORD(v32);
    v15 = (unsigned int)(unsigned __int8)(SLODWORD(v32) >> 23) - 118;
    if ( (int)v15 <= 40 )
    {
      v35 = LODWORD(v32) & 0x7FFFFF | 0x800000LL;
      if ( (int)v15 < 0 )
        v36 = v35 >> (118 - (unsigned __int8)(SLODWORD(v32) >> 23));
      else
        v36 = v35 << ((unsigned __int8)(SLODWORD(v32) >> 23) - 118);
      v15 = (v36 + 0x80000000LL) >> 32;
      a3 = (unsigned int)-((unsigned __int64)(v36 + 0x80000000LL) >> 32);
      if ( v32 >= 0.0 )
        a3 = (unsigned int)v15;
      if ( (int)a3 > 0 && v33 && lfWidth / 256 < (int)a3 )
        goto LABEL_61;
    }
    if ( (*(_DWORD *)(v30 + 48) & 4) != 0 )
    {
LABEL_61:
      v37 = v34 / v31;
    }
    else
    {
LABEL_62:
      v38 = *(_QWORD *)v8;
      if ( (*(_DWORD *)(*(_QWORD *)v8 + 48LL) & 4) != 0 )
      {
        v70 = v16;
        if ( !v13 )
        {
          v70 = v16 * v18;
          EFLOAT::vAbs((EFLOAT *)&v70);
        }
      }
      else
      {
        v70 = v17;
      }
      LOBYTE(v39) = 18;
      CurrentThread = KeGetCurrentThread();
      LOBYTE(v41) = 18;
      v77 = *(_QWORD *)(v38 + 128);
      if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v38, a3, a4) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v47 = *ThreadWin32Thread;
          if ( *ThreadWin32Thread )
          {
            if ( *(_QWORD *)(v47 + 352) )
              CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
            if ( *(_DWORD *)(v47 + 340) )
            {
              LOBYTE(v41) = *(_DWORD *)(v47 + 340);
            }
            else
            {
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v43);
              if ( CurrentProcessWin32Process )
                v41 = *(_DWORD *)(CurrentProcessWin32Process + 280);
            }
          }
        }
      }
      v49 = v76;
      v50 = 96;
      if ( (v76[8] & 1) == 0 || (v51 = 96, (v41 & 0xFu) - 1 <= 1) )
        v51 = v76[548];
      v52 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v43, v42, v44, v45) )
      {
        v54 = (__int64 *)PsGetThreadWin32Thread(v52);
        if ( v54 )
        {
          v56 = *v54;
          if ( *v54 )
          {
            if ( *(_QWORD *)(v56 + 352) )
              CaptureAndValidateUserModeDpiAwarenessContext(*v54);
            if ( *(_DWORD *)(v56 + 340) )
            {
              LOBYTE(v39) = *(_DWORD *)(v56 + 340);
            }
            else
            {
              v57 = PsGetCurrentProcessWin32Process(v55);
              if ( v57 )
                v39 = *(_DWORD *)(v57 + 280);
            }
          }
        }
      }
      if ( (v49[8] & 1) == 0 || (v39 & 0xFu) - 1 <= 1 )
        v50 = v76[549];
      if ( v51 == v50 || v10 )
      {
        v59 = HIDWORD(v77);
        v62 = v77;
      }
      else
      {
        v58 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v76, v53);
        v59 = v58 * HIDWORD(v77);
        v61 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v76, v60);
        v62 = v61 * v77;
      }
      v18 = v69;
      v8 = v79;
      v28 = v78;
      if ( v62 == v59 )
        v37 = v70;
      else
        v37 = (float)((float)v59 * v70) / (float)v62;
    }
    if ( !v75 )
      v37 = v37 / v18;
    *(float *)a1 = v37;
    v80 = a1;
    *((_QWORD *)a1 + 2) = 0LL;
    *(_QWORD *)((char *)a1 + 4) = 0LL;
    v63 = *(_QWORD *)v8;
    v81 = 0;
    if ( (*(_DWORD *)(v63 + 48) & 4) == 0 )
      goto LABEL_103;
    lfOrientation = v28->lfOrientation;
    if ( !lfOrientation )
      goto LABEL_103;
    v65 = (__m128i)COERCE_UNSIGNED_INT((float)lfOrientation);
    *(float *)v65.m128i_i32 = *(float *)v65.m128i_i32 / 10.0;
    v82[0] = efCos((unsigned int)_mm_cvtsi128_si32(v65));
    v82[3] = v82[0];
    v66 = efSin((unsigned int)_mm_cvtsi128_si32(v65));
    v67 = *((_OWORD *)a1 + 1);
    v85 = *((_DWORD *)a1 + 8);
    v82[1] = v66;
    v83 = 0LL;
    v82[2] = v66 ^ _xmm;
    v68 = *(_OWORD *)a1;
    v84[1] = v67;
    v84[0] = v68;
    if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v80, (struct MATRIX *)v84, (struct MATRIX *)v82, 0) )
    {
      return 0LL;
    }
    else
    {
LABEL_103:
      *((_DWORD *)a1 + 1) ^= _xmm;
      *((_DWORD *)a1 + 3) ^= _xmm;
      EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v80, 8u);
      return 1LL;
    }
  }
  return result;
}
