/*
 * XREFs of ?DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z @ 0x1C0037234
 * Callers:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010C874 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall DisplayID_UpdateForTelemetry(struct DisplayIDObj *a1)
{
  __int64 v1; // rbp
  int v2; // r12d
  char *v3; // rdi
  int v4; // r15d
  int v5; // esi
  bool v6; // r8
  char *v7; // r9
  char *v8; // r14
  __int64 v9; // rbx
  int v10; // edx
  int v11; // r13d
  char v12; // r8
  char v13; // al
  char v14; // al
  bool v15; // zf
  unsigned __int64 v16; // rcx
  char *v17; // rdx
  char v18; // al
  char v20; // [rsp+68h] [rbp+10h]
  char *v21; // [rsp+70h] [rbp+18h]

  if ( !a1 )
    return 3221225485LL;
  v1 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 3221225485LL;
  v2 = *((_DWORD *)a1 + 5);
  v3 = *(char **)a1;
  v4 = 0;
  if ( v2 <= 0 )
    return 0LL;
  while ( 2 )
  {
    v5 = (unsigned __int8)v3[1];
    v6 = 1;
    v20 = v5 + 5;
    v7 = &v3[(unsigned __int8)(v5 + 5)];
    v21 = v7;
    v8 = v7 - 1;
    v9 = (unsigned __int64)(v3 + 4) & -(__int64)((_BYTE)v5 != 0);
    if ( !v3[1] )
      goto LABEL_37;
    while ( 1 )
    {
      v10 = *(unsigned __int8 *)(v9 + 2);
      v11 = v10 + 3;
      if ( (unsigned int)v5 < 3 || v5 < v11 )
        break;
      v12 = *(_BYTE *)v9;
      if ( !*(_BYTE *)v9 )
      {
        v13 = (unsigned __int8)*v3 >> 4;
        if ( v13 == 2 )
          goto LABEL_35;
        if ( v13 == 1 && v1 + 4 != v9 )
        {
          v6 = v20 == 127;
          goto LABEL_36;
        }
      }
      v14 = (unsigned __int8)*v3 >> 4;
      if ( v14 == 2 )
      {
        if ( v12 == 32 )
        {
          if ( v12 != 32 || (unsigned __int8)(v10 - 12) > 0xECu )
            goto LABEL_34;
LABEL_33:
          *(_DWORD *)(v9 + 8) = 0;
          goto LABEL_34;
        }
        if ( v12 == 40 )
        {
          v15 = v12 == 40;
LABEL_26:
          if ( v15 && (_BYTE)v10 == 22 )
            *(_DWORD *)(v9 + 21) = 0;
          goto LABEL_34;
        }
        if ( v12 == 41 && v12 == 41 && (_BYTE)v10 == 16 )
        {
          *(_QWORD *)(v9 + 3) = 0LL;
          *(_QWORD *)(v9 + 11) = 0LL;
        }
      }
      else
      {
        if ( v14 != 1 )
          return 3221225659LL;
        if ( v12 )
        {
          if ( v12 == 10 )
          {
            if ( v5 >= v10 + 4 && (_BYTE)v10 )
              memset((void *)(v9 + 4), 0, *(unsigned __int8 *)(v9 + 2));
            goto LABEL_34;
          }
          v15 = v12 == 18;
          goto LABEL_26;
        }
        if ( v5 >= 14 )
          goto LABEL_33;
      }
LABEL_34:
      v5 -= v11;
      v9 += (unsigned int)v11;
      if ( v5 <= 0 )
      {
LABEL_35:
        v6 = 1;
        goto LABEL_36;
      }
    }
    v6 = 0;
LABEL_36:
    v7 = v21;
LABEL_37:
    *v8 = 0;
    v16 = v8 - v3;
    v17 = v3;
    if ( v3 > v8 )
      v16 = 0LL;
    if ( v16 )
    {
      do
      {
        v18 = *v17++;
        *v8 += v18;
      }
      while ( v17 - v3 < v16 );
    }
    *v8 = -*v8;
    if ( v6 )
    {
      ++v4;
      v3 = v7;
      if ( v4 >= v2 )
        return 0LL;
      continue;
    }
    return 3221225659LL;
  }
}
