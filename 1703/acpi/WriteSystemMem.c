/*
 * XREFs of WriteSystemMem @ 0x1C0012374
 * Callers:
 *     AccessBaseField @ 0x1C0010F30 (AccessBaseField.c)
 *     WriteBuffField @ 0x1C00122D0 (WriteBuffField.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

void __fastcall WriteSystemMem(unsigned __int64 Src, size_t Size, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 v9; // r14
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // esi
  __int64 v13; // rdx
  int (__fastcall *v14)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *); // rax
  __int64 v15; // rax
  _BYTE *v16; // rcx
  signed __int32 v17[8]; // [rsp+0h] [rbp-79h] BYREF
  __int64 Srca; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v20[10]; // [rsp+40h] [rbp-39h] BYREF

  v20[8] = -1LL;
  v5 = 0LL;
  v6 = Size;
  v20[0] = 0LL;
  v20[3] = 0LL;
  memset(&v20[5], 0, 24);
  Srca = 0LL;
  v20[1] = 255LL;
  v20[2] = 0xFFFFLL;
  v20[4] = 0xFFFFFFFFLL;
  if ( (unsigned int)Size > 8 )
    return;
  v9 = v20[(unsigned int)Size];
  if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
  {
    v13 = PmHalDispatchTable;
    v14 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *))(PmHalDispatchTable + 144);
    if ( v14 )
    {
      if ( a4 != v9 )
      {
        if ( v14(0LL, Src, &Srca, v6, v19) < 0 )
        {
LABEL_26:
          v5 = Srca;
          goto LABEL_3;
        }
        v5 = Srca;
        v13 = PmHalDispatchTable;
      }
      v15 = v5 & ~a4;
      v16 = v19;
      Srca = a3 | v15;
      LOBYTE(v16) = 1;
      if ( (*(int (__fastcall **)(_BYTE *, unsigned __int64, __int64 *, _QWORD, _BYTE *))(v13 + 144))(
             v16,
             Src,
             &Srca,
             v6,
             v19) >= 0 )
        return;
      goto LABEL_26;
    }
  }
LABEL_3:
  if ( Src % v6 )
  {
    if ( a4 != v9 )
    {
      memmove(&Srca, (const void *)Src, v6);
      v5 = Srca;
    }
    Srca = a3 | v5 & ~a4;
    memmove((void *)Src, &Srca, v6);
  }
  else
  {
    v10 = v6 - 1;
    if ( !v10 )
    {
      if ( a4 != v9 )
        v5 = *(unsigned __int8 *)Src;
      Srca = a3 | v5 & ~a4;
      *(_BYTE *)Src = Srca;
LABEL_8:
      _InterlockedOr(v17, 0);
      return;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      if ( a4 != v9 )
        v5 = *(unsigned __int16 *)Src;
      Srca = a3 | v5 & ~a4;
      *(_WORD *)Src = Srca;
      goto LABEL_8;
    }
    v12 = v11 - 2;
    if ( !v12 )
    {
      if ( a4 != v9 )
        v5 = *(unsigned int *)Src;
      Srca = a3 | v5 & ~a4;
      *(_DWORD *)Src = Srca;
      goto LABEL_8;
    }
    if ( v12 == 4 )
    {
      if ( a4 != v9 )
        v5 = *(_QWORD *)Src;
      Srca = a3 | v5 & ~a4;
      *(_QWORD *)Src = Srca;
      KeFlushWriteBuffer();
    }
  }
}
