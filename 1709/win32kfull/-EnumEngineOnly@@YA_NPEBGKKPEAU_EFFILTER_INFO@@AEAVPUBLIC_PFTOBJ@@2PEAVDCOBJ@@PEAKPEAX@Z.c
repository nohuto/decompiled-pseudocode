/*
 * XREFs of ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C00F7C3C
 * Callers:
 *     GreEnumFonts @ 0x1C00B17BC (GreEnumFonts.c)
 * Callees:
 *     ?bValid@FHOBJ@@QEAAHXZ @ 0x1C0039D8C (-bValid@FHOBJ@@QEAAHXZ.c)
 *     ??0EFSMEMOBJ@@QEAA@PEAVDCOBJ@@KKPEAXPEAK@Z @ 0x1C00F7EF0 (--0EFSMEMOBJ@@QEAA@PEAVDCOBJ@@KKPEAXPEAK@Z.c)
 *     ??1EFSMEMOBJ@@QEAA@XZ @ 0x1C00F7FC4 (--1EFSMEMOBJ@@QEAA@XZ.c)
 *     ?bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C00F800C (-bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C00F80EC (-bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C00F822C (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 */

char __fastcall EnumEngineOnly(
        const unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3,
        struct _EFFILTER_INFO *a4,
        __int64 **a5,
        __int64 **a6,
        struct DCOBJ *a7,
        unsigned int *a8,
        void *a9)
{
  __int64 v12; // r8
  char v13; // bl
  __int64 v14; // r10
  __int64 *v15; // rcx
  struct _FONTSUB *v16; // rax
  const unsigned __int16 *v17; // rsi
  __int64 *v19; // rax
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  BOOL v24; // eax
  _QWORD v25[2]; // [rsp+58h] [rbp-31h] BYREF
  __int64 *v26; // [rsp+68h] [rbp-21h] BYREF
  __int64 v27; // [rsp+70h] [rbp-19h]
  _QWORD v28[2]; // [rsp+78h] [rbp-11h] BYREF
  __int64 *v29; // [rsp+88h] [rbp-1h] BYREF
  __int64 v30; // [rsp+90h] [rbp+7h]
  __int64 *v31; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v32; // [rsp+A0h] [rbp+17h]

  v26 = *a5;
  v27 = *v26;
  v13 = 0;
  if ( FHOBJ::bValid((FHOBJ *)&v26) )
  {
    v28[0] = v12 + 8;
    v28[1] = *(_QWORD *)(v12 + 8);
    if ( FHOBJ::bValid((FHOBJ *)v28) )
    {
      if ( a1 )
      {
        EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v25, a7, 0x20u, a3, a9, a8);
        if ( !v25[0] )
          goto LABEL_12;
        if ( !(unsigned int)bScanFamilyAndFace(
                              (struct FHOBJ *)&v26,
                              (struct FHOBJ *)v28,
                              0LL,
                              0LL,
                              (struct EFSOBJ *)v25,
                              a3,
                              a4,
                              a1) )
          goto LABEL_12;
        v15 = *a6;
        if ( *a6 )
        {
          v32 = *v15;
          v29 = v15 + 1;
          v22 = v15[1];
          v31 = v15;
          v30 = v22;
          if ( !FHOBJ::bValid((FHOBJ *)&v31)
            || !FHOBJ::bValid((FHOBJ *)&v29)
            || !(unsigned int)bScanFamilyAndFace(
                                (struct FHOBJ *)&v31,
                                (struct FHOBJ *)&v29,
                                0LL,
                                0LL,
                                (struct EFSOBJ *)v25,
                                a3,
                                a4,
                                a1) )
          {
            goto LABEL_12;
          }
        }
        v16 = pfsubAlternateFacename(a1);
        v17 = (const unsigned __int16 *)((char *)v16 + 130);
        if ( !v16 )
          v17 = 0LL;
        if ( !v17 )
        {
LABEL_10:
          if ( !*(_DWORD *)(v25[0] + 28LL) )
            v13 = 1;
          goto LABEL_12;
        }
        *(_QWORD *)v25[0] = v16;
        if ( (unsigned int)bScanFamilyAndFace(
                             (struct FHOBJ *)&v26,
                             (struct FHOBJ *)v28,
                             0LL,
                             0LL,
                             (struct EFSOBJ *)v25,
                             a3,
                             a4,
                             v17) )
        {
          v21 = *a6;
          if ( !*a6 )
            goto LABEL_10;
          v30 = *v21;
          v31 = v21 + 1;
          v23 = v21[1];
          v29 = v21;
          v32 = v23;
          v24 = FHOBJ::bValid((FHOBJ *)&v29);
          if ( v24 && FHOBJ::bValid((FHOBJ *)&v31) )
          {
            v20 = bScanFamilyAndFace(
                    (struct FHOBJ *)&v29,
                    (struct FHOBJ *)&v31,
                    0LL,
                    0LL,
                    (struct EFSOBJ *)v25,
                    a3,
                    a4,
                    v17);
LABEL_19:
            if ( v20 )
              goto LABEL_10;
          }
        }
      }
      else
      {
        EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v25, a7, *(_DWORD *)(v14 + 12), a3, a9, a8);
        if ( !v25[0]
          || !bScanFamily((struct FHOBJ *)&v26, 2u, (struct FHOBJ *)&v26, 1u, 0LL, 0, (struct EFSOBJ *)v25, a3, a4, 0LL) )
        {
          goto LABEL_12;
        }
        v19 = *a6;
        if ( !*a6 )
          goto LABEL_10;
        v26 = *a6;
        v27 = *v19;
        if ( FHOBJ::bValid((FHOBJ *)&v26) )
        {
          v20 = bScanFamily(
                  (struct FHOBJ *)&v26,
                  2u,
                  (struct FHOBJ *)&v26,
                  1u,
                  0LL,
                  0,
                  (struct EFSOBJ *)v25,
                  a3,
                  a4,
                  0LL);
          goto LABEL_19;
        }
      }
LABEL_12:
      EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v25);
    }
  }
  return v13;
}
