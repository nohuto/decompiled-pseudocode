/*
 * XREFs of ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009F54
 * Callers:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000A350 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitSetTarget(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bp
  __int64 v4; // rbx
  _DWORD *v5; // rax
  _DWORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  __int64 v12; // rax
  _DWORD *v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
  {
    v4 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x2CuLL, (void **)&v13) )
    {
      v5 = v13;
      *v13 = 44;
      v6 = v5 + 1;
      memset(v5 + 1, 0, 0x28uLL);
      *v6 = 27;
      v6[1] = *((_DWORD *)this + 6);
      if ( (*((_BYTE *)this + 104) & 1) != 0 && (v7 = *((_QWORD *)this + 7)) != 0 && (v8 = *(_QWORD *)(v7 + 16)) != 0 )
      {
        v6[3] = *(_DWORD *)(v8 + 24);
        v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 7) + 16LL) + 16LL))(*(_QWORD *)(*((_QWORD *)this + 7) + 16LL));
      }
      else
      {
        v6[3] = 0;
        v9 = 0;
      }
      v6[2] = v9;
      v6[4] = *((_DWORD *)this + 16);
      v6[8] = *((_DWORD *)this + 12);
      v6[9] = (*((unsigned __int8 *)this + 104) >> 3) & 1;
      v10 = *((_QWORD *)this + 9);
      if ( v10 )
      {
        *((_WORD *)v6 + 14) = *(unsigned __int8 *)(v10 + 4);
        *((_WORD *)v6 + 15) = **((_WORD **)this + 9);
        v12 = *((_QWORD *)this + 9);
        if ( *(_DWORD *)v12 == 1 )
        {
          v4 = *(unsigned __int8 *)(v12 + 8);
        }
        else if ( *(_DWORD *)v12 == 2 )
        {
          v4 = *(_QWORD *)(v12 + 8);
        }
      }
      else
      {
        v6[7] = 0;
      }
      *(_QWORD *)(v6 + 5) = v4;
      *((_DWORD *)this + 4) |= 0x40u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
