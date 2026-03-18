/*
 * XREFs of MiSetSystemRegionTypes @ 0x1408110DC
 * Callers:
 *     MiInitializeSystemVa @ 0x140810A84 (MiInitializeSystemVa.c)
 * Callees:
 *     <none>
 */

void MiSetSystemRegionTypes()
{
  int v0; // edx
  __int64 *v1; // r9
  unsigned __int64 v2; // r8
  char v3; // cl
  unsigned __int64 i; // r10

  v0 = 0;
  v1 = qword_14036D800;
  do
  {
    v2 = (((unsigned __int64)*v1 >> 39) & 0x1FF) - 256;
    if ( v0 > 7 )
    {
      switch ( v0 )
      {
        case 8:
          goto LABEL_19;
        case 9:
          v3 = 7;
          break;
        case 10:
          v3 = 13;
          break;
        case 11:
          v3 = 1;
          break;
        default:
          v3 = 12;
          break;
      }
    }
    else if ( v0 == 7 )
    {
      v3 = 2;
    }
    else if ( v0 )
    {
      switch ( v0 )
      {
        case 1:
          v3 = 6;
          break;
        case 2:
          v3 = 8;
          break;
        case 3:
          v3 = 9;
          break;
        case 5:
LABEL_19:
          v3 = 4;
          break;
        default:
          v3 = 0;
          break;
      }
    }
    else
    {
      v3 = 5;
    }
    for ( i = (unsigned __int64)v1[1] >> 39; i; --i )
    {
      byte_14036D700[v2] = v3;
      v2 = (unsigned int)(v2 + 1);
    }
    ++v0;
    v1 += 2;
  }
  while ( (unsigned int)v0 < 0xD );
}
