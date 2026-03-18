/*
 * XREFs of ?cComputeGISET@@YAKPEAGKPEAU_GISET@@K@Z @ 0x1C00F5924
 * Callers:
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C00B37F0 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cComputeGISET(unsigned __int16 *a1, unsigned int a2, struct _GISET *a3, int a4)
{
  int v4; // ebp
  int v5; // edi
  __int64 v6; // r11
  __int64 v10; // r8
  unsigned __int16 *v11; // rdx
  int v12; // r9d
  int v13; // edx

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  if ( a2 )
  {
    do
    {
      v10 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v10 < a2 )
      {
        v11 = &a1[v10];
        do
        {
          if ( *v11 - a1[(unsigned int)(v10 - 1)] > 1 )
            break;
          LODWORD(v10) = v10 + 1;
          ++v11;
        }
        while ( (unsigned int)v10 < a2 );
      }
      v12 = a1[v5];
      v13 = a1[(unsigned int)(v10 - 1)] - v12;
      v4 += v13 + 1;
      if ( a3 )
      {
        *((_WORD *)a3 + 2 * v6 + 4) = v12;
        *((_WORD *)a3 + 2 * v6 + 5) = v13 + 1;
      }
      v6 = (unsigned int)(v6 + 1);
      v5 = v10;
    }
    while ( (unsigned int)v10 < a2 );
  }
  if ( a3 )
  {
    *((_DWORD *)a3 + 1) = a4;
    *(_DWORD *)a3 = v4;
  }
  return (unsigned int)v6;
}
