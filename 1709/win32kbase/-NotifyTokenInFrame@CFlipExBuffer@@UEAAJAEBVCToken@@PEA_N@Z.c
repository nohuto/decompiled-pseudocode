/*
 * XREFs of ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C0039700
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C00397DC (-UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1C003A3F4 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C00802D4 (-FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipExBuffer::NotifyTokenInFrame(CFlipExBuffer *this, const struct CRegion **a2, bool *a3)
{
  unsigned int v6; // ebp
  const struct CFlipToken *v7; // rax
  const struct CFlipToken *v8; // rdi
  unsigned int v9; // esi
  int v10; // eax
  char v12; // al

  v6 = -1073741811;
  v7 = CFlipToken::FromToken((const struct CToken *)a2);
  *a3 = 0;
  v8 = v7;
  if ( v7 )
  {
    v9 = *((_DWORD *)v7 + 23);
    v6 = 0;
    if ( v9 >= *((_DWORD *)this + 60) )
      return (unsigned int)-1073741811;
    *((_DWORD *)this + 61) = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)v7 + 112LL))(v7);
    if ( *((_DWORD *)this + 86) != v9 )
    {
      *((_DWORD *)this + 86) = v9;
      *a3 = 1;
    }
    if ( CFlipExBuffer::UpdateAttributes(this, v8) )
      *a3 = 1;
    v10 = *((_DWORD *)this + 87);
    if ( v10 != -1 )
    {
      if ( v10 == 1 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)v8 + 152LL))(v8) )
          goto LABEL_10;
        *((_DWORD *)this + 87) = -1;
        goto LABEL_17;
      }
      if ( v10 <= 1 || v10 > 3 )
        goto LABEL_10;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)v8 + 136LL))(v8) )
      {
        v12 = *((_BYTE *)this + 501);
        *((_DWORD *)this + 87) = 3;
LABEL_16:
        if ( !v12 )
        {
LABEL_10:
          CCompositionBuffer::NotifyDirty(this, a2[10], (const struct ScrollOptimization *)((char *)a2 + 52));
          return v6;
        }
LABEL_17:
        *a3 = 1;
        goto LABEL_10;
      }
      *((_DWORD *)this + 87) = -1;
    }
    v12 = 1;
    goto LABEL_16;
  }
  return v6;
}
