/*
 * XREFs of ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x1800DF270
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B3D84 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SessionBasedPointerDeviceArbitration::OnInputReport(
        SessionBasedPointerDeviceArbitration *this,
        struct InputInfo *a2)
{
  int v2; // esi
  char v5; // bp
  char v6; // r14
  __int64 v7; // r10
  int *v8; // r9
  int v9; // r8d
  char v10; // cl
  char v11; // cl
  int v12; // edx
  _DWORD *v13; // rcx
  unsigned int v14; // r8d
  _DWORD *v15; // rax
  char v16; // al
  int v17; // eax
  unsigned int i; // r8d
  int v19; // eax
  unsigned int j; // r8d

  v2 = 0;
  if ( (*(_BYTE *)a2 & 0x3B) != 0 )
  {
    v5 = 0;
    v6 = 0;
    if ( !*((_BYTE *)a2 + 512) && *((_DWORD *)a2 + 12) )
    {
      v7 = *((unsigned int *)a2 + 12);
      v8 = (int *)((char *)a2 + 60);
      do
      {
        v9 = *v8;
        v10 = v5 + 1;
        v8 += 8;
        if ( (v9 & 2) == 0 )
          v10 = v5;
        v5 = v10;
        v11 = v6 + 1;
        if ( (v9 & 1) == 0 )
          v11 = v6;
        v6 = v11;
        --v7;
      }
      while ( v7 );
    }
    v12 = *((_DWORD *)a2 + 1);
    if ( v12 != *((_DWORD *)this + 26) )
    {
      v13 = (_DWORD *)((char *)this + 24);
      v14 = 0;
      v15 = (_DWORD *)((char *)this + 24);
      while ( *v15 != v12 )
      {
        ++v14;
        ++v15;
        if ( v14 >= 0x14 )
        {
          v16 = 0;
          goto LABEL_16;
        }
      }
      v16 = 1;
LABEL_16:
      if ( *((_BYTE *)this + 108) || v16 )
      {
        if ( v5 )
        {
          if ( !v16 )
          {
            if ( *((_BYTE *)this + 109) )
            {
              v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
              if ( v2 < 0 )
                return (unsigned int)v2;
              *((_DWORD *)this + 26) = *((_DWORD *)a2 + 1);
            }
            else
            {
              v17 = -1;
              for ( i = 0; i < 0x14; ++i )
              {
                if ( *v13 != v12 && !*v13 && v17 == -1 )
                  v17 = i;
                ++v13;
              }
              if ( v17 == -1 )
                return (unsigned int)-2147418113;
              *((_DWORD *)this + v17 + 6) = v12;
            }
          }
        }
        else if ( v16 )
        {
          v19 = -1;
          for ( j = 0; j < 0x14; ++j )
          {
            if ( *v13 == v12 )
            {
              *v13 = 0;
            }
            else if ( !*v13 && v19 == -1 )
            {
              v19 = j;
            }
            ++v13;
          }
        }
      }
      else
      {
        *((_DWORD *)this + 26) = v12;
      }
    }
    if ( *((_DWORD *)a2 + 1) == *((_DWORD *)this + 26) )
    {
      if ( v5 )
      {
        *((_WORD *)this + 54) = 1;
      }
      else if ( v6 )
      {
        *((_WORD *)this + 54) = 257;
      }
      else
      {
        *((_WORD *)this + 54) = 0;
      }
      (*(void (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), a2);
    }
  }
  return (unsigned int)v2;
}
