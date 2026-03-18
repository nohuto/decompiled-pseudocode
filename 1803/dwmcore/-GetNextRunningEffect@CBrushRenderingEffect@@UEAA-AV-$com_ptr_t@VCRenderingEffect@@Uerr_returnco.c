/*
 * XREFs of ?GetNextRunningEffect@CBrushRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x180073B80
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x1800C457C (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CBrushRenderingEffect::GetNextRunningEffect(__int64 a1, _QWORD *a2, _QWORD *a3, _BYTE *a4)
{
  __int64 v8; // rax
  unsigned int v9; // r9d
  unsigned int v10; // r10d
  _BYTE *v11; // rcx
  char *v12; // r14
  _BYTE *v13; // rdx
  __int64 v14; // r11
  __int64 v15; // r8
  bool v17; // al
  _QWORD *v18; // rdx

  *a4 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a3 + 64LL))(a3) != 1 )
    goto LABEL_2;
  if ( a3 == (_QWORD *)a1 )
    goto LABEL_19;
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 == a3[2] )
  {
    v9 = *(_DWORD *)(v8 + 92);
    v10 = 0;
    if ( v9 )
    {
      v11 = (char *)a3 + 121;
      v12 = (char *)a3 - a1;
      v13 = (_BYTE *)(a1 + 40);
      v14 = 0LL;
      v15 = a1 - (_QWORD)a3;
      while ( *((_QWORD *)v13 - 2) == *(_QWORD *)&v13[(_QWORD)v12 - 16] && *v13 == v13[(_QWORD)v12] )
      {
        v17 = v11[v15 - 1] != *(v11 - 1) || v11[v15] != *v11 || v11[v15 + 1] != v11[1];
        if ( v17 || *(_BYTE *)(v14 + a1 + 196) != *((_BYTE *)a3 + v14 + 196) )
          break;
        ++v10;
        ++v14;
        v11 += 3;
        v13 += 24;
        if ( v10 >= v9 )
          goto LABEL_19;
      }
      v18 = a3;
      goto LABEL_20;
    }
LABEL_19:
    v18 = (_QWORD *)a1;
LABEL_20:
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
      a2,
      v18);
    return a2;
  }
LABEL_2:
  *a2 = a3;
  (*(void (__fastcall **)(_QWORD *))*a3)(a3);
  return a2;
}
