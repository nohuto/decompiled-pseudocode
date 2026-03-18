/*
 * XREFs of NtGdiCreateColorSpace @ 0x1C00FAF90
 * Callers:
 *     <none>
 * Callees:
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C006EFA0 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateColorSpace(_OWORD *a1)
{
  _OWORD *v1; // rdx
  _OWORD *v2; // rax
  __int64 v3; // rcx
  _BYTE v5[592]; // [rsp+30h] [rbp-268h] BYREF

  v1 = a1;
  if ( ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v2 = v5;
  v3 = 4LL;
  do
  {
    *v2 = *v1;
    v2[1] = v1[1];
    v2[2] = v1[2];
    v2[3] = v1[3];
    v2[4] = v1[4];
    v2[5] = v1[5];
    v2[6] = v1[6];
    v2 += 8;
    *(v2 - 1) = v1[7];
    v1 += 8;
    --v3;
  }
  while ( v3 );
  *v2 = *v1;
  v2[1] = v1[1];
  v2[2] = v1[2];
  v2[3] = v1[3];
  v2[4] = v1[4];
  return GreCreateColorSpace((struct _LOGCOLORSPACEEXW *)v5);
}
