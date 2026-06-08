/*
 * XREFs of AcpiCStateIdlePrepare @ 0x1C0001110
 * Callers:
 *     PepIdlePrepare @ 0x1C000D040 (PepIdlePrepare.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AcpiCStateIdlePrepare(__int64 *a1)
{
  __int64 v1; // rsi
  char v3; // cl
  unsigned int v4; // edi
  unsigned __int64 v5; // r8
  __int64 v6; // rbp
  __int64 v7; // rcx
  int (__fastcall *v8)(__int64); // rax
  unsigned __int64 v9; // r9
  unsigned int v10; // eax
  unsigned __int8 v11; // al
  __int64 i; // rdx

  v1 = *a1;
  v3 = 0;
  v4 = *((_DWORD *)a1 + 10);
  if ( v4 == -1 )
  {
    if ( *((_BYTE *)a1 + 50) )
    {
      v3 = 1;
      LODWORD(v6) = *(unsigned __int8 *)(v1 + 20) - 1;
      v4 = *(unsigned __int8 *)((unsigned int)v6 + v1 + 21);
    }
    else
    {
      v5 = a1[1] - *(_QWORD *)(v1 + 32);
      LODWORD(v6) = *(_DWORD *)(v1 + 16);
      if ( v5 >= *((unsigned int *)a1 + 11) )
      {
        v9 = a1[2] - *(_QWORD *)(v1 + 24);
        if ( v9 < (unsigned int)(v5 * *((unsigned __int8 *)a1 + 49) / 0x64) && (_DWORD)v6 )
        {
          LODWORD(v6) = v6 - 1;
          v3 = 1;
        }
        else
        {
          if ( v9 >= (unsigned int)(v5 * *((unsigned __int8 *)a1 + 48) / 0x64)
            && (int)v6 + 1 < (unsigned int)*(unsigned __int8 *)(v1 + 20) )
          {
            LODWORD(v6) = v6 + 1;
          }
          v3 = 1;
        }
      }
      v4 = *(unsigned __int8 *)((unsigned int)v6 + v1 + 21);
    }
  }
  else
  {
    v10 = *(_DWORD *)(v1 + 56);
    if ( v4 >= v10 )
      v4 = v10 - 1;
    v11 = *(_BYTE *)(v1 + 20);
    LODWORD(v6) = 0;
    for ( i = 0LL; (unsigned int)i < v11; i = (unsigned int)(i + 1) )
    {
      if ( (_DWORD)i && *(unsigned __int8 *)(i + v1 + 21) <= v4 )
        LODWORD(v6) = i;
    }
    v3 = 1;
  }
  *(_DWORD *)(v1 + 12) = v4;
  *(_DWORD *)(v1 + 16) = v6;
  if ( v3 )
  {
    *(_QWORD *)(v1 + 32) = a1[1];
    *(_QWORD *)(v1 + 24) = a1[2];
  }
  if ( v4 )
  {
    do
    {
      v7 = 88LL * v4;
      v8 = *(int (__fastcall **)(__int64))(v7 + v1 + 80);
      if ( !v8 )
        break;
      if ( v8(v1 + v7 + 96) >= 0 )
        break;
      v6 = (unsigned int)(v6 - 1);
      *((_DWORD *)a1 + 20) |= 1 << v4;
      v4 = *(unsigned __int8 *)(v6 + v1 + 21);
    }
    while ( *(_BYTE *)(v6 + v1 + 21) );
  }
  *(_DWORD *)(v1 + 8) = v4;
  *((_DWORD *)a1 + 15) = 0;
  *((_DWORD *)a1 + 19) = v4;
  *((_DWORD *)a1 + 18) = -1;
}
