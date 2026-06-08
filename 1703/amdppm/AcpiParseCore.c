/*
 * XREFs of AcpiParseCore @ 0x1C001AB1C
 * Callers:
 *     AcpiEval_CST @ 0x1C0018008 (AcpiEval_CST.c)
 *     AcpiEval_PCT_PTC @ 0x1C0018408 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSD_TSD @ 0x1C00185DC (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C00188C8 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C0018C38 (AcpiEval_XPSS.c)
 *     AcpiEval_TSS @ 0x1C0019118 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C0019508 (AcpiEval_CSD.c)
 *     AcpiEval_PCCP @ 0x1C00197E4 (AcpiEval_PCCP.c)
 *     AcpiEval_CPC @ 0x1C00199B4 (AcpiEval_CPC.c)
 *     AcpiParseLpiObject @ 0x1C0019FC4 (AcpiParseLpiObject.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_sd @ 0x1C0002A90 (WPP_RECORDER_SF_sd.c)
 *     WPP_RECORDER_SF_ss @ 0x1C0002BCC (WPP_RECORDER_SF_ss.c)
 *     WPP_RECORDER_SF_sss @ 0x1C0002D50 (WPP_RECORDER_SF_sss.c)
 *     GetObjectTypeName @ 0x1C0003428 (GetObjectTypeName.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
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
  bool i; // cf
  unsigned __int16 v15; // r9
  unsigned __int8 *v16; // rdx
  unsigned int v17; // edx
  unsigned __int8 *v18; // r8
  const char *ObjectTypeName; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  unsigned __int16 v24; // r9
  unsigned __int8 *v25; // r13
  int v26; // ebx
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned __int16 v29; // r9
  int v31; // [rsp+20h] [rbp-48h]
  unsigned __int64 v32; // [rsp+70h] [rbp+8h]

  v8 = (unsigned int)a2;
  v9 = 0LL;
  v10 = 0;
  v11 = (unsigned __int16 *)a3;
  v12 = a1;
  v13 = a1[24 * (unsigned int)(a2 - 1)] + 1;
  v32 = a3 + a4;
  for ( i = a3 < v32; ; i = (unsigned __int64)v11 < v32 )
  {
    if ( !i )
    {
      if ( v10 == v13 )
        return 0;
      v29 = 69;
      goto LABEL_37;
    }
    if ( v10 >= v13 )
    {
      if ( (a8 & 1) != 0 )
        return 261;
      v29 = 63;
LABEL_37:
      WPP_RECORDER_SF_sd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v29, v31, a7);
      return (unsigned int)-1072431093;
    }
    v15 = *v11;
    if ( (unsigned int)v9 >= (unsigned int)v8 )
      goto LABEL_9;
    v16 = &v12[24 * v9];
    while ( *v16 != v10 || *((_WORD *)v16 + 1) != v15 )
    {
      v9 = (unsigned int)(v9 + 1);
      v16 += 24;
      if ( (unsigned int)v9 >= (unsigned int)v8 )
        goto LABEL_9;
    }
    v25 = &v12[24 * v9];
    if ( !v25 )
    {
LABEL_9:
      v17 = 0;
      if ( !(_DWORD)v8 )
        return (unsigned int)-1072431096;
      v18 = v12;
      do
      {
        if ( *v18 == v10 )
          break;
        ++v17;
        v18 += 24;
      }
      while ( v17 < (unsigned int)v8 );
      if ( v17 >= (unsigned int)v8 )
        return (unsigned int)-1072431096;
      ObjectTypeName = GetObjectTypeName(v15);
      WPP_RECORDER_SF_sss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v20,
        v21,
        v22,
        v31,
        a7,
        *(const char **)&v12[24 * v20 + 8],
        ObjectTypeName);
      v23 = v8;
      while ( 2 )
      {
        if ( *v12 != v10 )
          goto LABEL_30;
        if ( *((_WORD *)v12 + 1) )
        {
          if ( *((_WORD *)v12 + 1) != 1 )
          {
            if ( *((_WORD *)v12 + 1) == 2 )
            {
              v24 = 67;
              break;
            }
LABEL_30:
            v12 += 24;
            if ( !--v23 )
              return (unsigned int)-1072431096;
            continue;
          }
          v24 = 66;
        }
        else
        {
          v24 = 65;
        }
        break;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v24,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
      goto LABEL_30;
    }
    v26 = (*((__int64 (__fastcall **)(unsigned __int16 *, __int64, _QWORD))v25 + 2))(
            v11,
            a5 + *((unsigned __int16 *)v25 + 2),
            a6 - (unsigned int)*((unsigned __int16 *)v25 + 2));
    if ( v26 < 0 )
      break;
    LOWORD(v28) = v11[1];
    ++v10;
    if ( (unsigned __int16)v28 >= 4u )
      v28 = (unsigned __int16)v28;
    else
      v28 = 4LL;
    v11 = (unsigned __int16 *)((char *)v11 + v28 + 4);
  }
  WPP_RECORDER_SF_ss((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v27, v31, a7, *((const char **)v25 + 1));
  return (unsigned int)v26;
}
