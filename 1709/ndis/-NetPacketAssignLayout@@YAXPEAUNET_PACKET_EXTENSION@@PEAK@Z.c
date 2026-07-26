/*
 * XREFs of ?NetPacketAssignLayout@@YAXPEAUNET_PACKET_EXTENSION@@PEAK@Z @ 0x1C00C8504
 * Callers:
 *     ?RebalanceExtensions@@YAXXZ @ 0x1C00C848C (-RebalanceExtensions@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall NetPacketAssignLayout(struct NET_PACKET_EXTENSION *a1, unsigned int *a2)
{
  _QWORD *v2; // r10
  _QWORD *v3; // rax
  unsigned int i; // r8d
  unsigned int v5; // ecx
  char v6; // dl
  char v7; // al
  unsigned int v8; // r9d
  _DWORD *v9; // rdx
  _QWORD *v10; // rax
  unsigned int v11; // ecx
  int v12; // r8d
  int v13; // ecx

  v2 = P;
  LODWORD(Size) = 0;
  v3 = P;
  if ( P )
  {
    do
    {
      *((_DWORD *)v3 + 4) = 0;
      v3 = (_QWORD *)v3[3];
    }
    while ( v3 );
  }
  for ( i = 64; ; i = v13 + v12 )
  {
    v5 = i;
    if ( i )
    {
      v6 = 0;
      if ( !(_WORD)i )
      {
        v6 = 16;
        v5 = HIWORD(i);
      }
      if ( !(_BYTE)v5 )
      {
        v6 += 8;
        v5 >>= 8;
      }
      if ( (v5 & 0xF) == 0 )
      {
        v6 += 4;
        v5 >>= 4;
      }
      if ( (v5 & 3) == 0 )
      {
        v6 += 2;
        v5 >>= 2;
      }
      v7 = v6 + 1;
      if ( (v5 & 1) != 0 )
        v7 = v6;
    }
    else
    {
      v7 = 32;
    }
    v8 = 1 << (v7 + 1);
    v9 = 0LL;
    v10 = v2;
    if ( !v2 )
      break;
    while ( *((_DWORD *)v10 + 4) )
    {
LABEL_22:
      v10 = (_QWORD *)v10[3];
      if ( !v10 )
        goto LABEL_26;
    }
    if ( *((_DWORD *)v10 + 3) < v8 )
    {
      v9 = v10;
      goto LABEL_22;
    }
    if ( v9 )
      goto LABEL_27;
    v9 = v10;
LABEL_26:
    if ( !v9 )
      break;
LABEL_27:
    v11 = i - 1;
    v12 = v9[2];
    v13 = ~(v9[3] - 1) & (v9[3] + v11);
    v9[4] = v13;
  }
  LODWORD(Size) = i;
}
