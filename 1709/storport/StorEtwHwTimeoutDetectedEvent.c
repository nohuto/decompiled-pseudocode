/*
 * XREFs of StorEtwHwTimeoutDetectedEvent @ 0x1C00414D4
 * Callers:
 *     StorTickEventQueue @ 0x1C001B010 (StorTickEventQueue.c)
 * Callees:
 *     McTemplateK0qcccjqqbqt @ 0x1C0040F3C (McTemplateK0qcccjqqbqt.c)
 */

NTSTATUS __fastcall StorEtwHwTimeoutDetectedEvent(__int64 a1, char a2)
{
  __int64 v2; // r8
  int v3; // r10d
  char v4; // bp
  __int64 v6; // r14
  unsigned __int8 v7; // r9
  int v8; // r15d
  __int64 v9; // r12
  NTSTATUS result; // eax
  __int64 v11; // rcx
  char v12; // di
  unsigned int v13; // esi
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned __int64 v16; // r11
  __int64 v17; // r9
  int v18; // edx
  int v19; // edx
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int8 v22; // r9
  char v23; // si
  unsigned int v24; // ebp
  unsigned int v25; // edi
  __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // r11
  int v29; // edx
  int v30; // edx
  unsigned __int64 v31; // rdx
  char v32; // [rsp+B0h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 168);
  v3 = 0;
  v4 = a2;
  v6 = 0LL;
  v7 = *(_BYTE *)(v2 + 2);
  if ( v7 == 40 )
    v8 = *(_DWORD *)(v2 + 20);
  else
    v8 = v7;
  v9 = *(_QWORD *)(a1 + 224);
  result = *(_DWORD *)(v9 + 88);
  if ( v7 == 40 )
    LODWORD(v11) = *(_DWORD *)(v2 + 40);
  else
    LODWORD(v11) = *(_DWORD *)(v2 + 20);
  v32 = v11;
  if ( !v8 )
  {
    if ( v7 != 40 )
    {
      v6 = v2 + 72;
      goto LABEL_29;
    }
    v12 = 0;
    if ( !*(_DWORD *)(v2 + 20) )
    {
      v13 = *(_DWORD *)(v2 + 56);
      v14 = 0;
      if ( v13 )
      {
        while ( 1 )
        {
          v15 = *(unsigned int *)(v2 + 4LL * v14 + 120);
          if ( (unsigned int)v15 >= 0x80 )
          {
            v16 = *(unsigned int *)(v2 + 16);
            if ( (unsigned int)v15 < (unsigned int)v16 )
              break;
          }
LABEL_26:
          if ( ++v14 >= v13 )
            goto LABEL_29;
        }
        v17 = (unsigned int)v15;
        v18 = *(_DWORD *)(v15 + v2) - 64;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 && v17 + 40 <= v16 )
            {
              v20 = v17 + v2 + 32;
              if ( !*(_DWORD *)(v17 + v2 + 12) )
                v20 = v6;
              v6 = v20;
              goto LABEL_29;
            }
            goto LABEL_25;
          }
          v21 = v17 + 56;
        }
        else
        {
          v21 = v17 + 40;
        }
        if ( v21 <= v16 )
        {
          v12 = 1;
          if ( !*(_BYTE *)(v17 + v2 + 10) )
            goto LABEL_29;
          v6 = v17 + v2 + 24;
        }
LABEL_25:
        if ( v12 )
          goto LABEL_29;
        goto LABEL_26;
      }
    }
LABEL_29:
    if ( v6 )
    {
      v22 = 0;
      if ( *(_BYTE *)(v2 + 2) == 40 )
      {
        v23 = 0;
        if ( *(_DWORD *)(v2 + 20) )
        {
          v22 = 0;
        }
        else
        {
          v24 = *(_DWORD *)(v2 + 56);
          v25 = 0;
          if ( v24 )
          {
            while ( 1 )
            {
              v26 = *(unsigned int *)(v2 + 4LL * v25 + 120);
              if ( (unsigned int)v26 >= 0x80 )
              {
                v27 = *(unsigned int *)(v2 + 16);
                if ( (unsigned int)v26 < (unsigned int)v27 )
                  break;
              }
LABEL_49:
              if ( ++v25 >= v24 )
                goto LABEL_39;
            }
            v28 = (unsigned int)v26;
            v29 = *(_DWORD *)(v26 + v2) - 64;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                if ( v30 == 1 && v28 + 40 <= v27 )
                  goto LABEL_39;
                goto LABEL_48;
              }
              v31 = v28 + 56;
            }
            else
            {
              v31 = v28 + 40;
            }
            if ( v31 <= v27 )
            {
              v22 = *(_BYTE *)(v28 + v2 + 10);
              v23 = 1;
            }
LABEL_48:
            if ( v23 )
              goto LABEL_39;
            goto LABEL_49;
          }
LABEL_39:
          v4 = a2;
        }
      }
      else
      {
        v22 = *(_BYTE *)(v2 + 10);
      }
      v3 = v22;
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x20000000) != 0 )
  {
    v11 = (unsigned int)v11;
    LOBYTE(v11) = BYTE1(result);
    return McTemplateK0qcccjqqbqt(
             v11,
             v9 + 1720,
             (const GUID *)(a1 + 728),
             *(_DWORD *)(*(_QWORD *)(v9 + 24) + 56LL),
             result,
             SBYTE1(result),
             SBYTE2(result),
             v9 + 1720,
             v8,
             v3,
             v6,
             v32,
             v4);
  }
  return result;
}
