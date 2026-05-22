/*
 * XREFs of ?HitTest@Edges@@QEAA_NKKPEAPEAX@Z @ 0x18002B2EC
 * Callers:
 *     ?OnHitTest@CShellEdgyImpl@@QEAA_NKKPEAK0@Z @ 0x18002BFE4 (-OnHitTest@CShellEdgyImpl@@QEAA_NKKPEAK0@Z.c)
 * Callees:
 *     McTemplateU0qqqqqq @ 0x180012E48 (McTemplateU0qqqqqq.c)
 *     ?FindEdge@Edges@@AEAAHI@Z @ 0x18002B2A0 (-FindEdge@Edges@@AEAAHI@Z.c)
 *     ??$emplace_back@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAXAEBI@Z @ 0x18002B8F4 (--$emplace_back@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAXAEBI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

bool __fastcall Edges::HitTest(Edges *this, int a2, int a3, void **a4)
{
  _QWORD *v4; // rsi
  int v5; // ebp
  __int64 v6; // rdi
  int v8; // r15d
  __int64 v11; // r11
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 i; // rbx

  v4 = *a4;
  v5 = 0;
  v6 = 0LL;
  v8 = a2;
  if ( *a4 )
  {
    if ( (__int64)(v4[1] - *v4) >> 2 )
    {
      do
      {
        if ( (int)Edges::FindEdge(this, *(_DWORD *)(*v4 + 4 * v6)) >= 0
          && (v12 = *(_QWORD *)this, *(_BYTE *)(*(_QWORD *)this + 72 * v6 + 8))
          && (float)v8 >= *(float *)(v12 + 72 * v6 + 12)
          && *(float *)(v12 + 72 * v6 + 20) >= (float)v8
          && (float)a3 >= *(float *)(v12 + 72 * v6 + 16)
          && *(float *)(v12 + 72 * v6 + 24) >= (float)a3 )
        {
          ++v5;
          v6 = (unsigned int)(v6 + 1);
        }
        else
        {
          memmove((void *)(v11 + 4 * v6), (const void *)(v11 + 4 * v6 + 4), v4[1] - (v11 + 4 * v6 + 4));
          v4[1] -= 4LL;
        }
      }
      while ( (unsigned int)v6 < (unsigned __int64)((__int64)(v4[1] - *v4) >> 2) );
    }
  }
  else
  {
    v13 = *((_QWORD *)this + 1);
    for ( i = *(_QWORD *)this; i != v13; i += 72LL )
    {
      if ( *(_BYTE *)(i + 8)
        && (float)v8 >= *(float *)(i + 12)
        && *(float *)(i + 20) >= (float)v8
        && (float)a3 >= *(float *)(i + 16)
        && *(float *)(i + 24) >= (float)a3 )
      {
        if ( !v4 )
        {
          v4 = operator new(0x18uLL);
          *v4 = 0LL;
          v4[1] = 0LL;
          v4[2] = 0LL;
          *a4 = v4;
        }
        std::vector<unsigned int>::emplace_back<unsigned int const &>(v4, i + 40);
        ++v5;
        if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
          McTemplateU0qqqqqq(
            *((_QWORD *)this + 1) - *(_QWORD *)this,
            &MinInput_CShellEdgy_EdgeHitTested,
            13,
            *(_DWORD *)(i + 40),
            *(_DWORD *)(i + 44),
            (*((_DWORD *)this + 2) - *(_DWORD *)this) / 72,
            v5,
            (__int64)(v4[1] - *v4) >> 2);
        v8 = a2;
      }
    }
  }
  return v5 != 0;
}
