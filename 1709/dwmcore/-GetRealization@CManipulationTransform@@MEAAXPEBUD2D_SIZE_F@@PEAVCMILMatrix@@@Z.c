/*
 * XREFs of ?GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800B4B80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x1800B4054 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall CManipulationTransform::GetRealization(
        CManipulationTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  __int128 v5; // xmm3
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  const GUID *v8; // r8
  const GUID *v9; // r9
  char *v10; // r10
  const GUID *v11; // r8
  const GUID *v12; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-D0h] BYREF
  char *v14; // [rsp+50h] [rbp-B0h]
  __int64 v15; // [rsp+58h] [rbp-A8h]
  char *v16; // [rsp+60h] [rbp-A0h]
  __int64 v17; // [rsp+68h] [rbp-98h]
  char *v18; // [rsp+70h] [rbp-90h]
  __int64 v19; // [rsp+78h] [rbp-88h]
  char *v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  char *v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  char *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  char *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  char *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  char *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  char *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  char *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  char *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  char *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  char *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  char *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  char *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]

  if ( *((_BYTE *)this + 264) )
  {
    CManipulationTransform::CalculateMatrixFromDelta(
      (CManipulationTransform *)((char *)this + 152),
      (CManipulationTransform *)((char *)this + 176),
      (CManipulationTransform *)((char *)this + 188),
      (CManipulationTransform *)((char *)this + 200));
    *((_BYTE *)this + 264) = 0;
  }
  v5 = *(_OWORD *)((char *)this + 216);
  v6 = *(_OWORD *)((char *)this + 232);
  v7 = *(_OWORD *)((char *)this + 248);
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + 200);
  *((_OWORD *)a3 + 1) = v5;
  *((_OWORD *)a3 + 2) = v6;
  *((_OWORD *)a3 + 3) = v7;
  *((_DWORD *)a3 + 16) = 0;
  if ( dword_18026D7B0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
    {
      v14 = v10;
      v16 = (char *)this + 204;
      v18 = (char *)this + 208;
      v20 = (char *)this + 212;
      v22 = (char *)this + 216;
      v24 = (char *)this + 220;
      v26 = (char *)this + 224;
      v28 = (char *)this + 228;
      v30 = (char *)this + 232;
      v32 = (char *)this + 236;
      v34 = (char *)this + 240;
      v36 = (char *)this + 244;
      v38 = (char *)this + 248;
      v40 = (char *)this + 252;
      v42 = (char *)this + 256;
      v44 = (char *)this + 260;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180213E98, v8, v9, 0x12u, &pData);
      LODWORD(v9) = dword_18026D7B0;
    }
    if ( (unsigned int)v9 > 4 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
      {
        v15 = 4LL;
        v14 = (char *)this + 152;
        v16 = (char *)this + 156;
        v18 = (char *)this + 160;
        v20 = (char *)this + 164;
        v22 = (char *)this + 168;
        v24 = (char *)this + 172;
        v26 = (char *)this + 176;
        v28 = (char *)this + 180;
        v30 = (char *)this + 184;
        v32 = (char *)this + 188;
        v34 = (char *)this + 192;
        v36 = (char *)this + 196;
        v17 = 4LL;
        v19 = 4LL;
        v21 = 4LL;
        v23 = 4LL;
        v25 = 4LL;
        v27 = 4LL;
        v29 = 4LL;
        v31 = 4LL;
        v33 = 4LL;
        v35 = 4LL;
        v37 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180213E19, v11, v12, 0xEu, &pData);
      }
    }
  }
}
