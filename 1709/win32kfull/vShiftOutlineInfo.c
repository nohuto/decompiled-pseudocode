/*
 * XREFs of vShiftOutlineInfo @ 0x1C0233A28
 * Callers:
 *     lQueryTTOutline @ 0x1C022D294 (lQueryTTOutline.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     vFillGLYPHDATA @ 0x1C02307B8 (vFillGLYPHDATA.c)
 *     vShiftBitmapInfo @ 0x1C0233968 (vShiftBitmapInfo.c)
 */

char *__fastcall vShiftOutlineInfo(__int64 a1, int a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  void (__fastcall *v9)(unsigned int *, unsigned int *, BOOL); // r15
  BOOL v10; // r13d
  char *result; // rax
  unsigned int *v12; // rbx
  unsigned int *v13; // rdi
  unsigned int *v14; // rsi
  __int64 v15; // r12
  unsigned int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int *i; // [rsp+48h] [rbp-B8h]
  __int64 v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+74h] [rbp-8Ch]
  _BYTE v22[240]; // [rsp+90h] [rbp-70h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v7 = a4;
  vShiftBitmapInfo(a1, (__int64)v22, v4);
  vFillGLYPHDATA(*(_DWORD *)(v8 + 312), *(_DWORD *)(v8 + 20), v8, (__int64)v22, v19, 0LL, 0LL);
  v9 = (void (__fastcall *)(unsigned int *, unsigned int *, BOOL))vAdd16FixTo16Fix;
  v16 = v20 << 16;
  v16 = (v20 << 16) - ((*(_DWORD *)(v4 + 80) + 0x8000) & 0xFFFF0000);
  v17 = -((v21 << 16) + (*(__int16 *)(v4 + 102) << 16));
  v10 = a2 == 0;
  if ( !a2 )
    v9 = (void (__fastcall *)(unsigned int *, unsigned int *, BOOL))vAdd16FixTo28Fix;
  result = (char *)a3 + v7;
  for ( i = (unsigned int *)((char *)a3 + v7); a3 < i; a3 = (unsigned int *)((char *)a3 + (_QWORD)result) )
  {
    v9(a3 + 2, &v16, 0LL);
    v9(a3 + 3, (unsigned int *)&v17, v10);
    v12 = a3 + 4;
    v13 = (unsigned int *)((char *)a3 + *a3);
    while ( v12 < v13 )
    {
      v14 = v12 + 1;
      if ( *((_WORD *)v12 + 1) )
      {
        v15 = *((unsigned __int16 *)v12 + 1);
        do
        {
          v9(v14, &v16, 0LL);
          v9(v14 + 1, (unsigned int *)&v17, v10);
          v14 += 2;
          --v15;
        }
        while ( v15 );
      }
      v12 += 2 * *((unsigned __int16 *)v12 + 1) + 1;
    }
    result = (char *)*a3;
  }
  return result;
}
