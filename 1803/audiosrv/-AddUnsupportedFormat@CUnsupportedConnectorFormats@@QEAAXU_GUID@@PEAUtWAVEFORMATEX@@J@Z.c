/*
 * XREFs of ?AddUnsupportedFormat@CUnsupportedConnectorFormats@@QEAAXU_GUID@@PEAUtWAVEFORMATEX@@J@Z @ 0x1800E9A98
 * Callers:
 *     _lambda_bc829bb10b63470994cc211668497c87_::operator() @ 0x1800E9504 (_lambda_bc829bb10b63470994cc211668497c87_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall CUnsupportedConnectorFormats::AddUnsupportedFormat(
        CUnsupportedConnectorFormats *this,
        struct _GUID *a2,
        struct tWAVEFORMATEX *a3,
        int a4)
{
  DWORD nSamplesPerSec; // ebx
  __int16 v7; // r8
  __int16 v9; // r10
  WORD wFormatTag; // ax
  __int16 v11; // bx
  __int16 v12; // dx
  int v13; // r8d
  int v14; // r9d
  __int16 v15; // dx
  __int16 v16; // r8
  __int16 v17; // r9
  __int16 v18; // dx
  __int16 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx

  nSamplesPerSec = a3->nSamplesPerSec;
  v7 = *((_WORD *)this + 114);
  v9 = 0;
  if ( v7 <= 0 )
  {
LABEL_4:
    if ( v7 >= 15 )
    {
      v9 = *((_WORD *)this + 114);
    }
    else
    {
      *((_DWORD *)this + v7 + 1) = nSamplesPerSec;
      v9 = *((_WORD *)this + 114);
      *((_WORD *)this + 114) = v9 + 1;
    }
  }
  else
  {
    while ( *((_DWORD *)this + v9 + 1) != nSamplesPerSec )
    {
      if ( ++v9 >= v7 )
        goto LABEL_4;
    }
  }
  if ( a3->wFormatTag == 0xFFFE )
    wFormatTag = a3[1].wFormatTag;
  else
    wFormatTag = a3->wBitsPerSample;
  v11 = 0;
  v12 = *((_WORD *)this + 115);
  v13 = a3->wBitsPerSample | (wFormatTag << 8);
  if ( v12 <= 0 )
  {
LABEL_13:
    if ( v12 >= 7 )
    {
      v11 = *((_WORD *)this + 115);
    }
    else
    {
      *((_DWORD *)this + v12 + 17) = v13;
      v11 = *((_WORD *)this + 115);
      *((_WORD *)this + 115) = v11 + 1;
    }
  }
  else
  {
    while ( *((_DWORD *)this + v11 + 17) != v13 )
    {
      if ( ++v11 >= v12 )
        goto LABEL_13;
    }
  }
  if ( a3->wFormatTag == 0xFFFE )
    v14 = *(_DWORD *)&a3[1].nChannels;
  else
    v14 = 0;
  v15 = *((_WORD *)this + 116);
  v16 = 0;
  if ( v15 <= 0 )
  {
LABEL_22:
    if ( v15 >= 15 )
    {
      v16 = *((_WORD *)this + 116);
    }
    else
    {
      *((_DWORD *)this + v15 + 25) = v14;
      v16 = *((_WORD *)this + 116);
      *((_WORD *)this + 116) = v16 + 1;
    }
  }
  else
  {
    while ( *((_DWORD *)this + v16 + 25) != v14 )
    {
      if ( ++v16 >= v15 )
        goto LABEL_22;
    }
  }
  v17 = *((_WORD *)this + 117);
  v18 = 0;
  if ( v17 <= 0 )
  {
LABEL_28:
    if ( v17 >= 15 )
    {
      v18 = *((_WORD *)this + 117);
    }
    else
    {
      *((_DWORD *)this + v17 + 41) = a4;
      v18 = *((_WORD *)this + 117);
      *((_WORD *)this + 117) = v18 + 1;
    }
  }
  else
  {
    while ( *((_DWORD *)this + v18 + 41) != a4 )
    {
      if ( ++v18 >= v17 )
        goto LABEL_28;
    }
  }
  v19 = v18 | (16 * (v16 | (16 * (v11 | (8 * v9)))));
  v20 = *(_QWORD *)&a2->Data1 - *((_QWORD *)this + 542);
  if ( *(_QWORD *)&a2->Data1 == *((_QWORD *)this + 542) )
    v20 = *(_QWORD *)a2->Data4 - *((_QWORD *)this + 543);
  v21 = *((unsigned int *)this + 1083);
  if ( v20 )
  {
    if ( (unsigned int)(v21 + 1) < 0x1000 )
    {
      *(_WORD *)((char *)this + (unsigned int)v21 + 236) = -1;
      LODWORD(v21) = *((_DWORD *)this + 1083);
    }
    v22 = (unsigned int)(v21 + 2);
    *((_DWORD *)this + 1083) = v22;
    if ( (unsigned __int64)(v22 + 16) < 0x1000 )
    {
      *(struct _GUID *)((char *)this + v22 + 236) = *a2;
      LODWORD(v22) = *((_DWORD *)this + 1083);
    }
    v21 = (unsigned int)(v22 + 16);
    *((_DWORD *)this + 1083) = v21;
    *((struct _GUID *)this + 271) = *a2;
  }
  if ( (unsigned __int64)(v21 + 2) < 0x1000 )
  {
    *(_WORD *)((char *)this + v21 + 236) = v19;
    *((_DWORD *)this + 1083) += 2;
  }
}
