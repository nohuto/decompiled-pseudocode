/*
 * XREFs of ?InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z @ 0x1C004B958
 * Callers:
 *     ?CreateCloned@CFlipToken@@SAJ_K0PEAUCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEAPEAV1@@Z @ 0x1C004B7A0 (-CreateCloned@CFlipToken@@SAJ_K0PEAUCompositionSurfaceObject@@PEBUtagCloneableFlipTokenData@@PEA.c)
 * Callees:
 *     ?Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z @ 0x1C0018340 (-Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipToken::InitializeCloned(
        CFlipToken *this,
        __int64 a2,
        const struct tagCloneableFlipTokenData *a3)
{
  unsigned int v6; // esi
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  unsigned int v12; // eax

  v6 = 0;
  v7 = CToken::Initialize((__int64)this, 2);
  if ( v7 >= 0 )
  {
    v8 = *((_DWORD *)a3 + 9);
    v7 = -1073741811;
    if ( (v8 & 0xFFFFFFFC) == 0 && v8 != 2 )
      v7 = 0;
    if ( v7 >= 0 )
    {
      v9 = 3LL;
      *((_QWORD *)this + 12) = a2;
      v10 = (_OWORD *)((char *)this + 104);
      do
      {
        *v10 = *(_OWORD *)a3;
        v10[1] = *((_OWORD *)a3 + 1);
        v10[2] = *((_OWORD *)a3 + 2);
        v10[3] = *((_OWORD *)a3 + 3);
        v10[4] = *((_OWORD *)a3 + 4);
        v10[5] = *((_OWORD *)a3 + 5);
        v10[6] = *((_OWORD *)a3 + 6);
        v10 += 8;
        v11 = *((_OWORD *)a3 + 7);
        a3 = (const struct tagCloneableFlipTokenData *)((char *)a3 + 128);
        *(v10 - 1) = v11;
        --v9;
      }
      while ( v9 );
      *v10 = *(_OWORD *)a3;
      v10[1] = *((_OWORD *)a3 + 1);
      v10[2] = *((_OWORD *)a3 + 2);
      v10[3] = *((_OWORD *)a3 + 3);
      *((_DWORD *)v10 + 16) = *((_DWORD *)a3 + 16);
      v12 = *((_DWORD *)this + 74);
      *((_BYTE *)this + 89) = 1;
      if ( v12 )
      {
        if ( v12 > 0x10 )
        {
          return (unsigned int)-1073741811;
        }
        else
        {
          do
            (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 10) + 40LL))(
              *((_QWORD *)this + 10),
              (char *)this + 16 * v6++ + 300);
          while ( v6 < *((_DWORD *)this + 74) );
        }
      }
    }
  }
  return (unsigned int)v7;
}
