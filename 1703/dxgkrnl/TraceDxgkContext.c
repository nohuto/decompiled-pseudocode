/*
 * XREFs of TraceDxgkContext @ 0x1C0025F90
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqqqqqqqqppp @ 0x1C0025E5C (Template_pqqqqqqqqppp.c)
 */

NTSTATUS __fastcall TraceDxgkContext(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int *a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11)
{
  NTSTATUS result; // eax
  __int64 v12; // rcx
  __int64 v13; // r9
  const EVENT_DESCRIPTOR *v14; // rdx
  int v15; // [rsp+28h] [rbp-60h]
  int v16; // [rsp+30h] [rbp-58h]
  int v17; // [rsp+38h] [rbp-50h]
  int v18; // [rsp+40h] [rbp-48h]
  int v19; // [rsp+48h] [rbp-40h]
  int v20; // [rsp+50h] [rbp-38h]
  int v21; // [rsp+58h] [rbp-30h]
  __int64 v22; // [rsp+60h] [rbp-28h]
  __int64 v23; // [rsp+68h] [rbp-20h]
  __int64 v24; // [rsp+70h] [rbp-18h]

  result = a8 != 0 ? 4 : 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        return result;
      v24 = a11;
      v23 = a10;
      v12 = (__int64)a5;
      v22 = a9;
      v21 = result | (a7 != 0 ? 2 : 0) | (a6 != 0);
      v20 = a5[4];
      v19 = a5[3];
      v18 = a5[2];
      v17 = a5[1];
      v16 = *a5;
      v15 = a4;
      v13 = a2;
      v14 = (const EVENT_DESCRIPTOR *)&EventDestroyContext;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        return result;
      v24 = a11;
      v23 = a10;
      v12 = (__int64)a5;
      v22 = a9;
      v21 = result | (a7 != 0 ? 2 : 0) | (a6 != 0);
      v20 = a5[4];
      v19 = a5[3];
      v18 = a5[2];
      v17 = a5[1];
      v16 = *a5;
      v15 = a4;
      v13 = a2;
      v14 = (const EVENT_DESCRIPTOR *)&EventReportContext;
    }
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
      return result;
    v24 = a11;
    v23 = a10;
    v12 = (__int64)a5;
    v22 = a9;
    v21 = result | (a7 != 0 ? 2 : 0) | (a6 != 0);
    v20 = a5[4];
    v19 = a5[3];
    v18 = a5[2];
    v17 = a5[1];
    v16 = *a5;
    v15 = a4;
    v13 = a2;
    v14 = (const EVENT_DESCRIPTOR *)&EventCreateContext;
  }
  return Template_pqqqqqqqqppp(v12, v14, a3, v13, a3, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24);
}
