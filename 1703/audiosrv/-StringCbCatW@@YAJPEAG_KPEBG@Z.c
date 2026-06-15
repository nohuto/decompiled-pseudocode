/*
 * XREFs of ?StringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1800A1A24
 * Callers:
 *     ?EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z @ 0x1800A000C (-EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z.c)
 *     ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x1800D346C (-sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCatW(unsigned __int16 *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // r10
  signed int v4; // r9d
  unsigned __int64 v7; // rcx
  unsigned __int16 *v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int16 *v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r10
  char *v13; // r11
  unsigned __int16 v14; // ax

  v3 = a2 >> 1;
  v4 = 0;
  if ( (a2 >> 1) - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
    goto LABEL_9;
  v7 = a2 >> 1;
  v8 = a1;
  if ( v3 )
  {
    do
    {
      if ( !*v8 )
        break;
      ++v8;
      --v7;
    }
    while ( v7 );
  }
  v4 = v7 == 0 ? 0x80070057 : 0;
  if ( v7 )
    v9 = v3 - v7;
  else
LABEL_9:
    v9 = 0LL;
  if ( v4 >= 0 )
  {
    v10 = &a1[v9];
    v4 = 0;
    v11 = v3 - v9;
    if ( v3 == v9 )
      goto LABEL_17;
    v12 = 2147483646LL;
    v13 = (char *)(a3 - (char *)v10);
    do
    {
      if ( !v12 )
        break;
      v14 = *(unsigned __int16 *)((char *)v10 + (_QWORD)v13);
      if ( !v14 )
        break;
      *v10 = v14;
      --v12;
      ++v10;
      --v11;
    }
    while ( v11 );
    if ( !v11 )
    {
LABEL_17:
      --v10;
      v4 = -2147024774;
    }
    *v10 = 0;
  }
  return (unsigned int)v4;
}
