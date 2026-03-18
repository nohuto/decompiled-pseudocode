/*
 * XREFs of RtlLoadString @ 0x140783060
 * Callers:
 *     <none>
 * Callees:
 *     DownLevelLanguageNameToLangID @ 0x14017A2B8 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     LdrpAccessResourceData @ 0x1405BB814 (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x1405BBB44 (LdrpSearchResourceSection_U.c)
 *     LdrResSearchResource @ 0x1405BD3B0 (LdrResSearchResource.c)
 */

__int64 __fastcall RtlLoadString(
        char *a1,
        unsigned __int16 a2,
        _WORD *a3,
        int a4,
        _QWORD *a5,
        _WORD *a6,
        void *a7,
        __int64 a8)
{
  unsigned int v10; // ecx
  bool v11; // di
  unsigned __int16 v13; // ax
  int v14; // edx
  unsigned __int16 v15; // cx
  int v16; // ebx
  __int16 v17; // r8
  ULONGLONG v18; // [rsp+40h] [rbp-78h] BYREF
  int v19; // [rsp+48h] [rbp-70h]
  unsigned int *v20; // [rsp+50h] [rbp-68h] BYREF
  unsigned int *v21; // [rsp+58h] [rbp-60h] BYREF
  _QWORD *v22; // [rsp+60h] [rbp-58h]
  __int64 v23[4]; // [rsp+68h] [rbp-50h] BYREF

  v22 = a5;
  v20 = 0LL;
  v10 = (unsigned int)a3;
  if ( (a4 & 1) != 0 )
    v10 = (unsigned int)a3;
  v11 = !(a4 & 1);
  if ( a1 && a5 && (a4 & 0xFFFFFFFE) == 0 )
  {
    if ( (a4 & 1) != 0 && (a7 || a8) )
      return 3221225659LL;
    if ( (unsigned int)a3 > 0xFFFF )
    {
      if ( *a3 )
      {
        v13 = DownLevelLanguageNameToLangID(a3, 2);
        v10 = v13;
        v19 = v13;
        if ( !v13 )
          return 3221225485LL;
      }
      else
      {
        v10 = 0;
        v19 = 0;
      }
    }
    v23[0] = 6LL;
    v23[1] = (a2 >> 4) + 1;
    v23[2] = v10;
    v23[3] = a2;
    v18 = 0LL;
    if ( v11 )
    {
      v14 = LdrResSearchResource((unsigned __int64)a1, v23, 4u, 1, &v20, &v18, a7, a8);
      if ( v14 >= 0 && v18 > 0xFFFF )
        v14 = -1073741701;
    }
    else
    {
      v14 = LdrpSearchResourceSection_U(a1, v23, 4u, 1, &v21);
      if ( v14 < 0 )
        return (unsigned int)v14;
      v14 = LdrpAccessResourceData((unsigned __int64)a1, (unsigned __int64)v21);
    }
    if ( v14 >= 0 && v20 )
    {
      v15 = 0;
      v16 = a2 & 0xF;
      v18 >>= 1;
      do
      {
        v17 = *((_WORD *)v20 + v15);
        v15 += v17 + 1;
        if ( v11 && v15 > v18 )
          return (unsigned int)-1073741701;
        --v16;
      }
      while ( v16 >= 0 );
      if ( v15 && v17 )
        v15 -= v17;
      *v22 = (char *)v20 + 2 * v15;
      if ( a6 )
        *a6 = v17;
    }
    return (unsigned int)v14;
  }
  return 3221225485LL;
}
