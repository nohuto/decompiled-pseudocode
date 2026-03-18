/*
 * XREFs of SepRmSetAuditEventWrkr @ 0x140631C70
 * Callers:
 *     SepRmCommandServerThread @ 0x1406316F0 (SepRmCommandServerThread.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 */

char __fastcall SepRmSetAuditEventWrkr(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int *v4; // rax
  __int64 *v5; // r11
  __int64 v6; // rsi
  unsigned __int16 v7; // r8
  __int16 v8; // cx
  __int16 v9; // r9
  __int64 v10; // r10
  __int16 v11; // bx
  int v12; // ecx
  int v13; // edx

  v3 = 0;
  *(_DWORD *)(a2 + 40) = 0;
  LOBYTE(v4) = PsIsCurrentThreadInServerSilo();
  if ( !(_BYTE)v4 )
  {
    v4 = SeAuditingStateByCategory;
    v5 = AdtpPerCategoryCount;
    v6 = 9LL;
    while ( 1 )
    {
      v7 = *(_WORD *)v5;
      v8 = 0;
      *v4 = 0;
      v9 = 0;
      if ( !v7 )
        goto LABEL_11;
      v10 = v7;
      do
      {
        *(_WORD *)&SeAuditingState[2 * v3] = 0;
        v11 = *(_WORD *)(a1 + 2LL * v3 + 44);
        if ( (v11 & 1) != 0 )
        {
          SeAuditingState[2 * v3] = 1;
          ++v8;
          v11 = *(_WORD *)(a1 + 2LL * v3 + 44);
        }
        if ( (v11 & 2) != 0 )
        {
          SeAuditingState[2 * v3 + 1] = 1;
          ++v9;
        }
        ++v3;
        --v10;
      }
      while ( v10 );
      if ( v8 )
      {
        if ( v8 == v7 )
        {
          v12 = 1;
          *v4 = 1;
          goto LABEL_13;
        }
        v12 = 2;
      }
      else
      {
LABEL_11:
        v12 = 4;
      }
      *v4 = v12;
LABEL_13:
      if ( v9 )
      {
        v13 = 32;
        if ( v9 == v7 )
          v13 = 16;
      }
      else
      {
        v13 = 64;
      }
      v5 = (__int64 *)((char *)v5 + 2);
      *v4++ = v13 | v12;
      if ( !--v6 )
      {
        SepRmAuditingEnabled = 1;
        return (char)v4;
      }
    }
  }
  return (char)v4;
}
