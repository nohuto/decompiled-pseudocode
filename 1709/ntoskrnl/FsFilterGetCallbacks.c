/*
 * XREFs of FsFilterGetCallbacks @ 0x140067370
 * Callers:
 *     FsFilterPerformCallbacks @ 0x140067200 (FsFilterPerformCallbacks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsFilterGetCallbacks(unsigned __int8 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rax
  __int64 result; // rax
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r10d
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // r10d
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // r10d
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // r10d
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // r10d
  __int64 v25; // rcx
  __int64 v26; // rcx

  v4 = *(_QWORD *)(a2 + 8);
  *a3 = 0LL;
  *a4 = 0LL;
  result = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 48LL);
  if ( result )
  {
    switch ( a1 )
    {
      case 0xFEu:
        v9 = *(_DWORD *)result;
        if ( *(_DWORD *)result >= 0x20u )
        {
          v10 = *a3;
          if ( *(_QWORD *)(result + 24) )
            v10 = *(_QWORD *)(result + 24);
          *a3 = v10;
        }
        if ( v9 >= 0x28 )
        {
          v11 = *(_QWORD *)(result + 32);
          result = *a4;
          if ( v11 )
            result = v11;
          *a4 = result;
        }
        break;
      case 0xFFu:
        v6 = *(_DWORD *)result;
        if ( *(_DWORD *)result >= 0x10u )
        {
          v7 = *(_QWORD *)(result + 8);
          if ( v7 )
            *a3 = v7;
        }
        if ( v6 >= 0x18 )
        {
          v8 = *(_QWORD *)(result + 16);
          if ( v8 )
            *a4 = v8;
        }
        break;
      case 0xF9u:
        v24 = *(_DWORD *)result;
        if ( *(_DWORD *)result >= 0x70u )
        {
          v25 = *a3;
          if ( *(_QWORD *)(result + 104) )
            v25 = *(_QWORD *)(result + 104);
          *a3 = v25;
        }
        if ( v24 >= 0x78 )
        {
          v26 = *(_QWORD *)(result + 112);
          if ( v26 )
            *a4 = v26;
        }
        break;
      case 0xFAu:
        v15 = *(_DWORD *)result;
        if ( *(_DWORD *)result >= 0x40u )
        {
          v16 = *a3;
          if ( *(_QWORD *)(result + 56) )
            v16 = *(_QWORD *)(result + 56);
          *a3 = v16;
        }
        if ( v15 >= 0x48 )
        {
          v17 = *(_QWORD *)(result + 64);
          if ( v17 )
            *a4 = v17;
        }
        break;
      case 0xFBu:
        v12 = *(_DWORD *)result;
        if ( *(_DWORD *)result >= 0x30u )
        {
          v13 = *a3;
          if ( *(_QWORD *)(result + 40) )
            v13 = *(_QWORD *)(result + 40);
          *a3 = v13;
        }
        if ( v12 >= 0x38 )
        {
          v14 = *(_QWORD *)(result + 48);
          if ( v14 )
            *a4 = v14;
        }
        break;
      case 0xFCu:
        v21 = *(_DWORD *)result;
        if ( *(_DWORD *)result >= 0x60u )
        {
          v22 = *a3;
          if ( *(_QWORD *)(result + 88) )
            v22 = *(_QWORD *)(result + 88);
          *a3 = v22;
        }
        if ( v21 >= 0x68 )
        {
          v23 = *(_QWORD *)(result + 96);
          if ( v23 )
            *a4 = v23;
        }
        break;
      case 0xFDu:
        v18 = *(_DWORD *)result;
        if ( *(_DWORD *)result >= 0x50u )
        {
          v19 = *a3;
          if ( *(_QWORD *)(result + 72) )
            v19 = *(_QWORD *)(result + 72);
          *a3 = v19;
        }
        if ( v18 >= 0x58 )
        {
          v20 = *(_QWORD *)(result + 80);
          if ( v20 )
            *a4 = v20;
        }
        break;
      default:
        *a3 = 0LL;
        *a4 = 0LL;
        break;
    }
  }
  return result;
}
