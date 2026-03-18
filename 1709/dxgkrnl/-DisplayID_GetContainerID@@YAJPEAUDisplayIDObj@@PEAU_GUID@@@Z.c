/*
 * XREFs of ?DisplayID_GetContainerID@@YAJPEAUDisplayIDObj@@PEAU_GUID@@@Z @ 0x1C00370D4
 * Callers:
 *     ?_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z @ 0x1C010D18C (-_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_GetContainerID(struct DisplayIDObj *a1, struct _GUID *a2)
{
  unsigned __int64 v2; // r8
  int v4; // esi
  int v5; // edi
  _BYTE *i; // r11
  int v7; // ebx
  _BYTE *v8; // r9
  int v9; // ebp
  __int64 v10; // rax
  char *v11; // r9
  char v12; // al

  v2 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  v4 = *((_DWORD *)a1 + 5);
  v5 = 0;
  for ( i = *(_BYTE **)a1; v5 < v4; i += (unsigned __int8)(i[1] + 5) )
  {
    if ( (*i & 0xF0) != 0x20 )
      break;
    v7 = (unsigned __int8)i[1];
    v8 = (_BYTE *)((unsigned __int64)(i + 4) & -(__int64)(i[1] != 0));
    if ( i[1] )
    {
      do
      {
        if ( !*v8 )
          break;
        v9 = (unsigned __int8)v8[2];
        v10 = (unsigned int)(v9 + 3);
        if ( (unsigned int)v7 < 3 || v7 < (int)v10 )
          break;
        if ( *v8 == 41 )
        {
          if ( (_BYTE)v9 != 16 )
            return 3221225659LL;
          v11 = v8 + 3;
          if ( (&a2[1] >= a2 ? 0x10 : 0) != 0 )
          {
            do
            {
              v12 = *v11++;
              *((_BYTE *)&a2->Data1 + v2++) = v12;
            }
            while ( v2 < (&a2[1] >= a2 ? 0x10 : 0) );
          }
          a2->Data1 = _byteswap_ulong(a2->Data1);
          a2->Data2 = __ROR2__(a2->Data2, 8);
          a2->Data3 = __ROR2__(a2->Data3, 8);
          return 0LL;
        }
        v7 -= v10;
        v8 += v10;
      }
      while ( v7 > 0 );
    }
    ++v5;
  }
  return 3221225659LL;
}
