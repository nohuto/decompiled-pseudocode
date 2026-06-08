/*
 * XREFs of AcpiParseCore @ 0x1C0020180
 * Callers:
 *     AcpiEval_PSD_TSD @ 0x1C001F9C0 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CST @ 0x1C001FC18 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C001FF00 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0020334 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C0020484 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C00205EC (AcpiEval_CPC.c)
 *     AcpiEval_PCT_PTC @ 0x1C0020B00 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PCCP @ 0x1C002C614 (AcpiEval_PCCP.c)
 *     AcpiEval_XPSS @ 0x1C002C9F4 (AcpiEval_XPSS.c)
 *     AcpiParseLpiObject @ 0x1C002D178 (AcpiParseLpiObject.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     GetObjectTypeName @ 0x1C000A9C8 (GetObjectTypeName.c)
 *     WPP_RECORDER_SF_sd @ 0x1C000B314 (WPP_RECORDER_SF_sd.c)
 *     WPP_RECORDER_SF_ss @ 0x1C000B454 (WPP_RECORDER_SF_ss.c)
 *     WPP_RECORDER_SF_sss @ 0x1C000B5D8 (WPP_RECORDER_SF_sss.c)
 */

__int64 __fastcall AcpiParseCore(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        const char *a7,
        char a8)
{
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int v10; // esi
  unsigned __int16 *v11; // r14
  unsigned __int8 *v12; // rdi
  unsigned int v13; // r15d
  unsigned __int16 v14; // r9
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // r13
  int v17; // ebx
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned int v21; // edx
  unsigned __int8 *v22; // r8
  const char *ObjectTypeName; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  unsigned __int16 v28; // r9
  unsigned __int16 v29; // r9
  int v30; // [rsp+20h] [rbp-48h]
  unsigned __int64 v31; // [rsp+70h] [rbp+8h]

  v8 = (unsigned int)a2;
  v9 = 0LL;
  v10 = 0;
  v11 = (unsigned __int16 *)a3;
  v12 = a1;
  v13 = a1[24 * (unsigned int)(a2 - 1)] + 1;
  v31 = a3 + a4;
  if ( a3 < v31 )
  {
    while ( v10 < v13 )
    {
      v14 = *v11;
      if ( (unsigned int)v9 >= (unsigned int)v8 )
        goto LABEL_19;
      v15 = &v12[24 * v9];
      while ( *v15 != v10 || *((_WORD *)v15 + 1) != v14 )
      {
        v9 = (unsigned int)(v9 + 1);
        v15 += 24;
        if ( (unsigned int)v9 >= (unsigned int)v8 )
          goto LABEL_19;
      }
      v16 = &v12[24 * v9];
      if ( !v16 )
      {
LABEL_19:
        v21 = 0;
        if ( !(_DWORD)v8 )
          return (unsigned int)-1072431096;
        v22 = v12;
        do
        {
          if ( *v22 == v10 )
            break;
          ++v21;
          v22 += 24;
        }
        while ( v21 < (unsigned int)v8 );
        if ( v21 >= (unsigned int)v8 )
          return (unsigned int)-1072431096;
        ObjectTypeName = GetObjectTypeName(v14);
        WPP_RECORDER_SF_sss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v24,
          v25,
          v26,
          v30,
          a7,
          *(const char **)&v12[24 * v24 + 8],
          ObjectTypeName);
        v27 = v8;
        while ( 2 )
        {
          if ( *v12 != v10 )
            goto LABEL_33;
          if ( *((_WORD *)v12 + 1) )
          {
            if ( *((_WORD *)v12 + 1) != 1 )
            {
              if ( *((_WORD *)v12 + 1) == 2 )
              {
                v28 = 67;
                break;
              }
LABEL_33:
              v12 += 24;
              if ( !--v27 )
                return (unsigned int)-1072431096;
              continue;
            }
            v28 = 66;
          }
          else
          {
            v28 = 65;
          }
          break;
        }
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v28,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
        goto LABEL_33;
      }
      v17 = (*((__int64 (__fastcall **)(unsigned __int16 *, __int64, _QWORD))v16 + 2))(
              v11,
              a5 + *((unsigned __int16 *)v16 + 2),
              a6 - (unsigned int)*((unsigned __int16 *)v16 + 2));
      if ( v17 < 0 )
      {
        WPP_RECORDER_SF_ss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          a2,
          a3,
          v18,
          v30,
          a7,
          *((const char **)v16 + 1));
        return (unsigned int)v17;
      }
      LOWORD(v19) = v11[1];
      ++v10;
      if ( (unsigned __int16)v19 < 4u )
        v19 = 4LL;
      else
        v19 = (unsigned __int16)v19;
      v11 = (unsigned __int16 *)((char *)v11 + v19 + 4);
      if ( (unsigned __int64)v11 >= v31 )
        goto LABEL_12;
    }
    if ( (a8 & 1) != 0 )
      return 261;
    v29 = 63;
LABEL_39:
    WPP_RECORDER_SF_sd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v29, v30, a7);
    return (unsigned int)-1072431093;
  }
LABEL_12:
  if ( v10 != v13 )
  {
    v29 = 69;
    goto LABEL_39;
  }
  return 0;
}
