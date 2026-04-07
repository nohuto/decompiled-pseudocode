/*
 * XREFs of ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x1800A0B80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::AddDirtyRect(CBitmap *this, const struct tagRECT *a2)
{
  int v4; // esi
  LONG right; // eax
  LONG bottom; // eax
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  unsigned int left; // edx
  unsigned int *v10; // rax
  unsigned int v11; // r10d
  unsigned int top; // r9d
  unsigned int *v13; // rcx
  unsigned int *v14; // rdx
  int v15; // r9d
  unsigned int v16; // r8d
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int *v21; // rcx
  int v22; // r8d
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rax
  int v29; // eax

  v4 = 0;
  if ( a2 )
  {
    if ( a2->left < 0
      || a2->top < 0
      || (right = a2->right, right <= a2->left)
      || (unsigned int)right > *((_DWORD *)this + 40)
      || (bottom = a2->bottom, bottom <= a2->top)
      || (unsigned int)bottom > *((_DWORD *)this + 41) )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1C3u);
      goto LABEL_69;
    }
  }
  if ( *((_DWORD *)this + 14) )
  {
    if ( *((_BYTE *)this + 212) || *((_DWORD *)this + 52) != *((_DWORD *)this + 36) )
    {
      *((_DWORD *)this + 50) = 0;
      *((_BYTE *)this + 212) = 0;
    }
    if ( !a2 || a2->right - a2->left == *((_DWORD *)this + 40) && a2->bottom - a2->top == *((_DWORD *)this + 41) )
    {
      *((_DWORD *)this + 50) = 0;
      goto LABEL_69;
    }
    v7 = *((_DWORD *)this + 50);
    if ( v7 )
    {
      v8 = a2->right;
      left = a2->left;
      v10 = (unsigned int *)*((_QWORD *)this + 24);
      if ( v8 <= left )
        goto LABEL_69;
      v11 = a2->bottom;
      top = a2->top;
      if ( v11 <= top || left >= *v10 && top >= v10[1] && v8 <= v10[2] && v11 <= v10[3] )
        goto LABEL_69;
    }
    else
    {
      *((_DWORD *)this + 51) = *((_DWORD *)this + 36);
    }
    if ( v7 < 5 )
    {
      if ( *((_QWORD *)this + 24)
        || (v28 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    80LL),
            (*((_QWORD *)this + 24) = v28) != 0LL) )
      {
        *(struct tagRECT *)(*((_QWORD *)this + 24) + 16LL * (unsigned int)(*((_DWORD *)this + 50))++) = *a2;
      }
      else
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x205u);
      }
    }
    else
    {
      do
      {
        --*((_DWORD *)this + 50);
        v13 = (unsigned int *)*((_QWORD *)this + 24);
        v14 = &v13[4 * *((unsigned int *)this + 50)];
        if ( v13[2] <= *v13 || (v15 = 0, v13[3] <= v13[1]) )
          v15 = 1;
        v16 = *v14;
        if ( v14[2] <= *v14 || (v17 = 0, v14[3] <= v14[1]) )
          v17 = 1;
        if ( v15 )
        {
          if ( v17 )
          {
            *((_QWORD *)v13 + 1) = 0LL;
            *(_QWORD *)v13 = 0LL;
          }
          else
          {
            *(_OWORD *)v13 = *(_OWORD *)v14;
          }
        }
        else if ( !v17 )
        {
          if ( v16 < *v13 )
            *v13 = v16;
          v18 = v14[1];
          if ( v18 < v13[1] )
            v13[1] = v18;
          v19 = v14[2];
          if ( v19 > v13[2] )
            v13[2] = v19;
          v20 = v14[3];
          if ( v20 > v13[3] )
            v13[3] = v20;
        }
      }
      while ( *((_DWORD *)this + 50) > 1u );
      v21 = (unsigned int *)*((_QWORD *)this + 24);
      if ( v21[2] <= *v21 || (v22 = 0, v21[3] <= v21[1]) )
        v22 = 1;
      v23 = a2->left;
      if ( a2->right <= (unsigned int)a2->left || (v24 = 0, a2->bottom <= (unsigned int)a2->top) )
        v24 = 1;
      if ( v22 )
      {
        if ( v24 )
        {
          *((_QWORD *)v21 + 1) = 0LL;
          *(_QWORD *)v21 = 0LL;
        }
        else
        {
          *(struct tagRECT *)v21 = *a2;
        }
      }
      else if ( !v24 )
      {
        if ( v23 < *v21 )
          *v21 = v23;
        v25 = a2->top;
        if ( v25 < v21[1] )
          v21[1] = v25;
        v26 = a2->right;
        if ( v26 > v21[2] )
          v21[2] = v26;
        v27 = a2->bottom;
        if ( v27 > v21[3] )
          v21[3] = v27;
      }
    }
  }
LABEL_69:
  v29 = *((_DWORD *)this + 36) + 1;
  if ( *((_DWORD *)this + 36) == -1 )
    v29 = 1;
  *((_DWORD *)this + 36) = v29;
  if ( v4 < 0 )
    *((_DWORD *)this + 50) = 0;
  else
    *((_DWORD *)this + 52) = v29;
  return (unsigned int)v4;
}
