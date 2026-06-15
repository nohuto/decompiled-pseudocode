/*
 * XREFs of ?StringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1800C2DE4
 * Callers:
 *     ?EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z @ 0x1800C0970 (-EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z.c)
 *     ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x18010DA34 (-sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCatW(unsigned __int16 *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // r10
  signed int v5; // r9d
  unsigned __int64 v7; // rcx
  unsigned __int16 *i; // rax
  unsigned __int64 v9; // r8
  unsigned __int16 *v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  char *v13; // r11
  unsigned __int16 v14; // ax
  unsigned __int16 *v15; // rax

  v3 = a2 >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 < 0 )
    goto LABEL_9;
  v7 = v3;
  for ( i = a1; v7; --v7 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v5 = v7 == 0 ? 0x80070057 : 0;
  if ( v7 )
    v9 = v3 - v7;
  else
LABEL_9:
    v9 = 0LL;
  if ( v5 >= 0 )
  {
    v10 = &a1[v9];
    v11 = v3 - v9;
    if ( v3 != v9 )
    {
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
    }
    v15 = v10 - 1;
    if ( v11 )
      v15 = v10;
    v5 = v11 == 0 ? 0x8007007A : 0;
    *v15 = 0;
  }
  return (unsigned int)v5;
}
