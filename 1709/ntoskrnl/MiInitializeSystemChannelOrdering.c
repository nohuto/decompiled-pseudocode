/*
 * XREFs of MiInitializeSystemChannelOrdering @ 0x14086C118
 * Callers:
 *     MiInitializeNuma @ 0x1405B36A0 (MiInitializeNuma.c)
 * Callees:
 *     MiPageToChannel @ 0x1400C7124 (MiPageToChannel.c)
 */

void __fastcall MiInitializeSystemChannelOrdering(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r11d
  __int64 v3; // r10
  unsigned __int64 *v4; // rcx
  unsigned int v5; // eax
  __int64 i; // rcx
  __int64 v7; // rax
  unsigned int v8; // r8d
  __int64 v9; // rdx
  unsigned int v10; // ecx
  _BYTE *v11; // r9
  unsigned int v12; // ecx
  _BYTE *v13; // r9
  unsigned int v14; // ecx
  _BYTE *v15; // r9

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 16) + 8256LL * a2;
  v4 = (unsigned __int64 *)MxFreeDescriptor[a2];
  if ( v4[1] )
  {
    v5 = MiPageToChannel(*v4);
    *(_BYTE *)(v5 + v3 + 8193) = 2;
  }
  for ( i = qword_140388520; *(_QWORD *)i != -1LL; i += 16LL )
  {
    if ( *(unsigned __int16 *)(i + 10) == v2 )
    {
      v7 = *(unsigned __int16 *)(i + 12);
      if ( *(_BYTE *)(i + 14) )
      {
        if ( *(_BYTE *)(v7 + v3 + 8193) != 2 )
          *(_BYTE *)(v7 + v3 + 8193) = 1;
      }
      else
      {
        *(_BYTE *)(v7 + v3 + 8193) = 2;
      }
    }
  }
  v8 = MmNumberOfChannels;
  v9 = 0LL;
  v10 = 0;
  if ( MmNumberOfChannels )
  {
    v11 = (_BYTE *)(v3 + 8193);
    do
    {
      if ( *v11 == 2 )
      {
        *(_BYTE *)(v3 + v9 + 8185) = v10;
        *(_BYTE *)(v3 + v9 + 8189) = v10;
        v9 = (unsigned int)(v9 + 1);
      }
      ++v10;
      ++v11;
    }
    while ( v10 < v8 );
  }
  v12 = 0;
  if ( v8 )
  {
    v13 = (_BYTE *)(v3 + 8193);
    do
    {
      if ( *v13 == 1 )
      {
        *(_BYTE *)(v3 + v9 + 8185) = v12;
        *(_BYTE *)(v3 + v9 + 8189) = v12;
        v9 = (unsigned int)(v9 + 1);
      }
      ++v12;
      ++v13;
    }
    while ( v12 < v8 );
  }
  v14 = 0;
  if ( v8 )
  {
    v15 = (_BYTE *)(v3 + 8193);
    do
    {
      if ( !*v15 )
      {
        *(_BYTE *)(v3 + v9 + 8185) = v14;
        *(_BYTE *)(v3 + v9 + 8189) = v14;
        v9 = (unsigned int)(v9 + 1);
      }
      ++v14;
      ++v15;
    }
    while ( v14 < v8 );
  }
}
