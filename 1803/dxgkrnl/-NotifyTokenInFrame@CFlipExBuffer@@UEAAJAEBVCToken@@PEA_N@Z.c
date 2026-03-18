/*
 * XREFs of ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C0012F50
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C00130EC (-UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C004C990 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 */

__int64 __fastcall CFlipExBuffer::NotifyTokenInFrame(CFlipExBuffer *this, const struct CToken *a2, bool *a3)
{
  unsigned int v6; // ebp
  int v7; // eax
  const struct CFlipToken *v8; // rdi
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // r14
  _DWORD *v12; // rsi
  _OWORD *v13; // rdi
  int v15; // esi
  char v16; // al

  v6 = -1073741811;
  v7 = (*(__int64 (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 64LL))(a2);
  v8 = 0LL;
  *a3 = 0;
  if ( v7 == 1 )
    v8 = a2;
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 + 26);
    v6 = 0;
    if ( v9 >= *((_DWORD *)this + 60) )
      return (unsigned int)-1073741811;
    *((_DWORD *)this + 61) = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)v8 + 112LL))(v8);
    if ( *((_DWORD *)this + 87) != v9 )
    {
      *((_DWORD *)this + 87) = v9;
      *a3 = 1;
    }
    if ( CFlipExBuffer::UpdateAttributes(this, v8) )
      *a3 = 1;
    v10 = *((_DWORD *)this + 88);
    if ( v10 == -1 )
    {
      v16 = 1;
    }
    else
    {
      if ( v10 <= 1 )
      {
        if ( v10 != 1 || !(*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)v8 + 152LL))(v8) )
          goto LABEL_12;
        *((_DWORD *)this + 88) = -1;
        goto LABEL_29;
      }
      v15 = 3;
      if ( v10 > 3 )
      {
LABEL_12:
        v11 = *((_QWORD *)a2 + 10);
        v12 = (_DWORD *)((char *)this + 256);
        v13 = (_OWORD *)((char *)a2 + 52);
        if ( *((_DWORD *)this + 64) )
        {
          CCompositionBuffer::AddScrollAsDirty(this, (CFlipExBuffer *)((char *)this + 256));
          *v12 = 0;
          *((_BYTE *)this + 42) = 1;
        }
        if ( a2 != (const struct CToken *)-52LL && *(_DWORD *)v13 )
        {
          if ( *((_BYTE *)this + 42) )
          {
            CCompositionBuffer::AddScrollAsDirty(this, (const struct CToken *)((char *)a2 + 52));
          }
          else
          {
            *(_OWORD *)v12 = *v13;
            *((_QWORD *)this + 34) = *(_QWORD *)((char *)a2 + 68);
            *((_DWORD *)this + 70) = *((_DWORD *)a2 + 19);
          }
        }
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11) )
        {
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 31) + 48LL))(
            *((_QWORD *)this + 31),
            v11,
            2LL);
          *((_BYTE *)this + 42) = 1;
        }
        return v6;
      }
      if ( (*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)v8 + 136LL))(v8) )
      {
        v16 = *((_BYTE *)this + 569);
      }
      else
      {
        v16 = 1;
        v15 = -1;
      }
      *((_DWORD *)this + 88) = v15;
    }
    if ( v16 )
    {
LABEL_29:
      *a3 = 1;
      goto LABEL_12;
    }
    goto LABEL_12;
  }
  return v6;
}
