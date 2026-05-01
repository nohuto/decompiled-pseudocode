/*
 * XREFs of ?RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z @ 0x180007B50
 * Callers:
 *     ?RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K22@Z @ 0x180007A94 (-RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K22@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E8E0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostComputeCommitEstimate(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rtt

  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    v5 = a2 >> 4;
  else
    v5 = a1 >> 3;
  if ( v5 <= 0x500000 )
    v5 = 5242880LL;
  v6 = v5 + a1 - 1;
  if ( v5 == 5242880 )
    v7 = v6 / 0x500000;
  else
    v7 = v6 / v5;
  v8 = -1LL;
  if ( is_mul_ok(v7, v5) )
    v8 = v7 * v5;
  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v8 > a2 )
  {
    v13 = v5 + a2 - 1;
    v8 = v13 / v5 * v5;
    if ( !is_mul_ok(v13 / v5, v5) )
    {
      v8 = -1LL;
LABEL_21:
      v9 = -1LL;
      goto LABEL_12;
    }
  }
  if ( v8 == -1LL )
    goto LABEL_21;
  v9 = v8 + v5;
  if ( v8 + v5 < v8 )
    goto LABEL_21;
LABEL_12:
  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v8 >= a2 )
      v8 = a2;
    if ( a2 < v9 )
      v9 = a2;
  }
  v10 = 2 * v5;
  v11 = v8;
  if ( v10 < v8 )
    v11 = v10;
  v12 = v8 - v11;
  if ( a4 )
    *a4 = v9;
  if ( a3 )
    *a3 = v12;
}
