/*
 * XREFs of ?AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z @ 0x1800249A0
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180020510 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasButton::AddApproximateAtlasSize(CAtlasButton *this, unsigned int *a2)
{
  int *v2; // rax
  int v3; // edi
  int v6; // r10d
  int v7; // r9d
  int v8; // edx
  int v9; // esi
  int v10; // ecx
  int v11; // ebx
  int v12; // edx
  int v13; // ecx
  _DWORD *v14; // rbx
  int *v15; // rax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx

  v2 = (int *)*((_QWORD *)this + 9);
  v3 = 4;
  v6 = 2;
  v7 = 1;
  if ( v2 )
  {
    if ( v2[8] <= 0 )
    {
      v8 = 1;
      v9 = 2;
    }
    else
    {
      v8 = 2;
      v9 = 4;
    }
    if ( v2[9] <= 0 )
    {
      v10 = 0;
      v11 = 0;
    }
    else
    {
      v10 = 1;
      v11 = 2;
    }
    v12 = v10 + v8;
    if ( v2[10] <= 0 )
      v13 = v12;
    else
      v13 = v11 + v9;
    if ( v2[11] <= 0 )
      v12 = 0;
    *a2 += v13 + v12;
  }
  v14 = (_DWORD *)*((_QWORD *)this + 17);
  if ( v14 )
    *a2 += ((v14[8] > 0) + 1 + (v14[9] > 0)) * ((v14[10] > 0) + 1 + (v14[11] > 0));
  v15 = (int *)*((_QWORD *)this + 18);
  if ( v15 )
  {
    if ( v15[8] > 0 )
    {
      v16 = 2;
    }
    else
    {
      v16 = 1;
      v3 = 2;
    }
    if ( v15[9] <= 0 )
    {
      v7 = 0;
      v6 = 0;
    }
    v17 = v7 + v16;
    if ( v15[10] > 0 )
      v18 = v3 + v6;
    else
      v18 = v17;
    if ( v15[11] <= 0 )
      v17 = 0;
    *a2 += v18 + v17;
  }
}
