/*
 * XREFs of ?SerializeEventHeaderFromEndpointMap@CPlaybackNotifier@@AEAAXPEADK@Z @ 0x18000F298
 * Callers:
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18000F354 (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPlaybackNotifier::SerializeEventHeaderFromEndpointMap(CPlaybackNotifier *this, char *a2)
{
  unsigned int v2; // r9d
  __int64 *v3; // r10
  unsigned int v5; // r11d
  __int64 *v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rcx
  __int64 *i; // rcx

  *(_DWORD *)a2 = 1;
  v2 = 0;
  v3 = (__int64 *)*((_QWORD *)this + 10);
  v5 = 8;
  v6 = (__int64 *)*v3;
  while ( v6 != v3 )
  {
    v7 = v6 + 4;
    if ( *((_DWORD *)v6 + 16) )
    {
      if ( v2 >= 0x24 )
        break;
      if ( (unsigned __int64)v6[7] >= 8 )
        v7 = (__int64 *)*v7;
      v8 = v5;
      v5 += 112;
      ++v2;
      *(_OWORD *)&a2[v8] = *(_OWORD *)v7;
      *(_OWORD *)&a2[v8 + 16] = *((_OWORD *)v7 + 1);
      *(_OWORD *)&a2[v8 + 32] = *((_OWORD *)v7 + 2);
      *(_OWORD *)&a2[v8 + 48] = *((_OWORD *)v7 + 3);
      *(_OWORD *)&a2[v8 + 64] = *((_OWORD *)v7 + 4);
      *(_OWORD *)&a2[v8 + 80] = *((_OWORD *)v7 + 5);
      *(_OWORD *)&a2[v8 + 96] = *((_OWORD *)v7 + 6);
    }
    if ( !*((_BYTE *)v6 + 25) )
    {
      v9 = (__int64 *)v6[2];
      if ( *((_BYTE *)v9 + 25) )
      {
        for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v6 = i;
        v6 = i;
      }
      else
      {
        do
        {
          v6 = v9;
          v9 = (__int64 *)*v9;
        }
        while ( !*((_BYTE *)v9 + 25) );
      }
    }
  }
  *((_DWORD *)a2 + 1) = v2;
}
