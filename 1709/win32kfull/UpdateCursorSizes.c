/*
 * XREFs of UpdateCursorSizes @ 0x1C0119A90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?UnlockDpiCursors@@YAXK@Z @ 0x1C01A0E88 (-UnlockDpiCursors@@YAXK@Z.c)
 */

void UpdateCursorSizes()
{
  __int64 v0; // r8
  int v1; // ecx
  __int64 *v2; // rax
  unsigned __int16 v3; // ax
  int v4; // ecx
  __int64 *v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // esi
  unsigned __int16 v9; // dx
  int v10; // edx
  int v11; // edx
  __int64 *v12; // rax
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h] BYREF
  int v21; // [rsp+30h] [rbp-10h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v0 = *(_QWORD *)(gpDispInfo + 96LL);
  v1 = 48;
  v21 = 0;
  while ( v0 )
  {
    v9 = *(_WORD *)(*(_QWORD *)(v0 + 40) + 64LL);
    if ( v9 >= 0x90u )
    {
      if ( v9 >= 0xC0u )
      {
        if ( v9 >= 0x120u )
          v10 = v9 < 0x180u ? 96 : 128;
        else
          v10 = 64;
      }
      else
      {
        v10 = 48;
      }
    }
    else
    {
      v10 = 32;
    }
    v11 = v10 - 32;
    if ( !v11 )
    {
LABEL_16:
      v12 = &v19;
      goto LABEL_17;
    }
    v13 = v11 - 16;
    if ( v13 )
    {
      v14 = v13 - 16;
      if ( v14 )
      {
        v15 = v14 - 32;
        if ( v15 )
        {
          if ( v15 != 32 )
            goto LABEL_16;
          v12 = (__int64 *)&v21;
        }
        else
        {
          v12 = (__int64 *)((char *)&v20 + 4);
        }
      }
      else
      {
        v12 = &v20;
      }
    }
    else
    {
      v12 = (__int64 *)((char *)&v19 + 4);
    }
LABEL_17:
    v0 = *(_QWORD *)(v0 + 56);
    *(_DWORD *)v12 = 1;
  }
  switch ( *(_WORD *)(gpsi + 9976LL) )
  {
    case 0x20:
      goto LABEL_4;
    case 0x30:
      v2 = (__int64 *)((char *)&v19 + 4);
      break;
    case 0x40:
      v2 = &v20;
      break;
    case 0x60:
      v2 = (__int64 *)((char *)&v20 + 4);
      break;
    case 0x80:
      v2 = (__int64 *)&v21;
      break;
    default:
LABEL_4:
      v2 = &v19;
      break;
  }
  *(_DWORD *)v2 = 1;
  v3 = *(_WORD *)(gpsi + 9974LL);
  if ( v3 >= 0x90u )
  {
    if ( v3 >= 0xC0u )
    {
      if ( v3 >= 0x120u )
        v1 = v3 < 0x180u ? 96 : 128;
      else
        v1 = 64;
    }
  }
  else
  {
    v1 = 32;
  }
  v4 = v1 - 32;
  if ( v4 )
  {
    v16 = v4 - 16;
    if ( v16 )
    {
      v17 = v16 - 16;
      if ( v17 )
      {
        v18 = v17 - 32;
        if ( v18 )
        {
          if ( v18 != 32 )
            goto LABEL_8;
          v5 = (__int64 *)&v21;
        }
        else
        {
          v5 = (__int64 *)((char *)&v20 + 4);
        }
      }
      else
      {
        v5 = &v20;
      }
    }
    else
    {
      v5 = (__int64 *)((char *)&v19 + 4);
    }
  }
  else
  {
LABEL_8:
    v5 = &v19;
  }
  v6 = 0;
  *(_DWORD *)v5 = 1;
  v7 = 0LL;
  do
  {
    v8 = *(_DWORD *)((char *)&v19 + v7);
    if ( v8 != *(_DWORD *)((char *)&gfCursorSizeNeeded + v7) )
    {
      if ( v8 )
      {
        _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 4u);
        KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
      }
      else
      {
        UnlockDpiCursors(v6);
      }
      *(_DWORD *)((char *)&gfCursorSizeNeeded + v7) = v8;
    }
    ++v6;
    v7 += 4LL;
  }
  while ( v6 < 5 );
}
